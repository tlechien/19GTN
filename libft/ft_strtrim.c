/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:36:13 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/13 17:20:37 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		y;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i == len)
		return (ft_strdup(""));
	while (len - 1 > -1 && (s[len - 1] == ' ' || s[len - 1] == '\n' ||
			s[len - 1] == '\t'))
		len--;
	if (!(str = ft_strnew(len - i)))
		return (NULL);
	y = 0;
	while (i < len)
		str[y++] = s[i++];
	return (str);
}
