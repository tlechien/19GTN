/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:21:57 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/12 17:09:21 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	if (!s || !(str = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
		str[i++] = s[start++];
	return (str);
}
