/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:58:46 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/13 15:13:19 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*init;

	if (!(init = (t_list*)(malloc(sizeof(t_list)))))
		return (NULL);
	init->next = NULL;
	if (!content)
	{
		init->content = NULL;
		init->content_size = 0;
	}
	else
	{
		if (!(init->content = (void*)malloc(content_size)))
		{
			free(init);
			return (NULL);
		}
		init->content = ft_memcpy(init->content, content, content_size);
		init->content_size = content_size;
	}
	return (init);
}
