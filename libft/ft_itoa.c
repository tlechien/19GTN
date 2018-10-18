/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:14:43 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/11 18:10:02 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int size;

	size = 1;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*word;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	(n >= 0) ? (sign = 0) : sign;
	size = get_size(n) + sign;
	if (!(word = ft_strnew((size_t)size)))
		return (NULL);
	while (size > 0)
	{
		if (!sign)
			word[--size] = (n % 10) + '0';
		else
			word[--size] = (-n % 10) + '0';
		n = n / 10;
	}
	if (sign)
		word[0] = '-';
	return (word);
}
