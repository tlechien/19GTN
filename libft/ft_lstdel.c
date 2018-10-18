/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 19:20:03 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/13 13:08:28 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if (alst && *alst && del)
	{
		ft_lstdel(&((*alst)->next), del);
		ft_lstdelone(alst, del);
	}
}
