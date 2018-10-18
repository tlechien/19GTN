/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:37:59 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/11 18:52:07 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	short				sign;
	unsigned long long	nb;

	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' ||
			*str == '\f' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		(*str == '-') ? sign = -1 : sign;
		str++;
	}
	nb = 0;
	while (*str && ft_isdigit(*str))
	{
		if (nb > 9223372036854775807)
		{
			if (sign == -1)
				return (0);
			else
				return (-1);
		}
		nb = nb * 10 + (int)*str++ - 48;
	}
	return ((int)nb * sign);
}
