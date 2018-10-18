/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 15:31:57 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/18 20:14:17 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		read_line(const int fd, char **fd_data)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;
	char	*ptr;

	while (!(ft_strchr(buf, '\n')) && (ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		ptr = fd_data[fd];
		fd_data[fd] = ft_strjoin(ptr, buf);
		ft_strdel(&ptr);
	}
	if (ret != -1)
		return (1);
	ft_strdel(&fd_data[fd]);
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static	char	*fd_data[MAX_INT];
	char			*str;
	char			*ptr;

	if (fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	if (!fd_data[fd])
		fd_data[fd] = ft_strnew(1);
	if (!(read_line(fd, fd_data)))
		return (-1);
	if ((str = ft_strchr(fd_data[fd], '\n')) != NULL)
	{
		*line = ft_strsub(fd_data[fd], 0, str - fd_data[fd]);
		ptr = fd_data[fd];
		fd_data[fd] = ft_strdup(str + 1);
		ft_strdel(&ptr);
		return (1);
	}
	*line = ft_strdup(fd_data[fd]);
	fd_data[fd] = NULL;
	if (ft_strlen(*line) == 0)
		return (0);
	return (1);
}
