/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:28:16 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/09 16:35:52 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int y;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			y = 0;
			while (haystack[i + y] && needle[y] && needle[y] == haystack[i + y])
				y++;
			if (!needle[y])
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
