/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:39:54 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/11 16:45:20 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*dest;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dst < src)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len-- > 0)
			dest[len] = source[len];
	}
	return (dst);
}
