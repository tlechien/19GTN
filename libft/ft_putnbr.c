/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:42:28 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/13 14:56:02 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	exponant(int base, int exp)
{
	int result;
	int nb;

	result = 1;
	nb = 0;
	while (nb < exp)
	{
		result *= base;
		nb++;
	}
	return (result);
}

static int	ft_count(int nb)
{
	int counter;

	counter = 1;
	while (nb > 9)
	{
		nb /= 10;
		counter++;
	}
	return (counter);
}

void		ft_putnbr(int nb)
{
	int counter;
	int number;

	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else if (nb == 0)
		ft_putchar('0');
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		counter = ft_count(nb);
		while (counter >= 1)
		{
			number = nb / (exponant(10, counter - 1));
			nb = nb - number * (exponant(10, counter - 1));
			ft_putchar(number + '0');
			counter--;
		}
	}
}
