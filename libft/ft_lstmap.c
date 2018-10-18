/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:20:42 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/16 14:08:31 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstfree(t_list **alst)
{
	if (alst && *alst)
	{
		ft_lstfree(&((*alst)->next));
		free((*alst)->content);
		(*alst)->content_size = 0;
		(*alst)->next = NULL;
		free(*alst);
		*alst = NULL;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ptr;
	t_list	*lst_new;

	if (lst && f)
	{
		ptr = ft_lstmap(lst->next, f);
		if (!(lst_new = f(ft_lstnew(lst->content, lst->content_size))))
		{
			ft_lstfree(&lst);
			return (NULL);
		}
		ft_lstadd(&ptr, lst_new);
		return ((lst->next) ? (ptr) : (lst_new));
	}
	return (NULL);
}
