/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:53:05 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/13 17:21:47 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen2(const char *s)
{
	int i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*map;
	int		i;

	len = ft_strlen2(s);
	i = 0;
	if (!s || !f || !(map = ft_strnew(len)))
		return (NULL);
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	return (map);
}
