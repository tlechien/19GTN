/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:53:44 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/13 16:55:44 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	*dest;
	size_t			i;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	while (n != 0 && i < n && source[i] != (unsigned char)c)
		i++;
	if (i < n)
	{
		ft_memcpy(dst, src, i + 1);
		dest = (unsigned char *)dst;
		return (&dest[i + 1]);
	}
	ft_memcpy(dst, src, n);
	return (NULL);
}
