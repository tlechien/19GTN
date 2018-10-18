/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:31:59 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/09 16:29:51 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*memory;

	if (!(memory = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (size > 0)
		memory[--size] = 0;
	return ((void *)memory);
}
