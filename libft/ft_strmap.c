/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:48:55 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/13 17:21:18 by tlechien         ###   ########.fr       */
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

char			*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	char	*map;

	len = ft_strlen2(s);
	if (!s || !f || !(map = ft_strnew(len)))
		return (NULL);
	while (len-- > 0)
		map[len] = f(s[len]);
	return (map);
}
