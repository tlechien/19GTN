/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:11:06 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/09 16:35:21 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			y = 0;
			while (haystack[i + y] && needle[y] && i + y < len &&
					needle[y] == haystack[i + y])
				y++;
			if (!needle[y])
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
