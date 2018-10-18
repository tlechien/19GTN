/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:52:18 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/09 15:29:38 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;
	size_t	i;

	string = (char *)s;
	i = -1;
	while (++i < n)
	{
		if (string[i] == (char)c)
			return (&string[i]);
	}
	return (NULL);
}
