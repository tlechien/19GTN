/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 15:31:57 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/17 19:14:31 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(const int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;
	char	*line;

	if (!(line = (char*)malloc(BUFF_SIZE + 1)))
		return (NULL);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		line = ft_strjoin(line, buf);
	}
	if (ret == -1)
		ft_strdel(&line);
	return (line);
}

int		get_next_line(const int fd, char **line)
{
	char	*data;
	size_t	i;

	if (!fd || !line)
	{
		return (-1);
	}
	data = read_line(fd);
	i = 0;
	while (data[i] != '\n' && data[i] != '\0')
		i++;
	*line = ft_strsub(data, 0, i);
	if (data[i] == '\n')
		return (1);
	return (0);
}
