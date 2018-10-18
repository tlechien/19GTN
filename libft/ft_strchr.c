/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 20:49:05 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/09 16:34:34 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char letter;

	letter = (char)c;
	while (*s)
	{
		if (letter == *s)
			return ((char *)s);
		else
			s++;
	}
	if (*s == letter)
		return ((char *)s);
	else
		return (NULL);
}
