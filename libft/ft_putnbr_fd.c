/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:42:28 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/13 14:56:30 by tlechien         ###   ########.fr       */
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

void		ft_putnbr_fd(int nb, int fd)
{
	int counter;
	int number;

	if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (nb == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar_fd('-', fd);
		}
		counter = ft_count(nb);
		while (counter >= 1)
		{
			number = nb / (exponant(10, counter - 1));
			nb = nb - number * (exponant(10, counter - 1));
			ft_putchar_fd(number + '0', fd);
			counter--;
		}
	}
}
