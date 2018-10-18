/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:28:50 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/12 17:08:24 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(str = ft_strnew(len1 + len2 + 1)))
		return (NULL);
	while (i < len1 + len2 + 1)
	{
		if (*s1)
			str[i] = *s1++;
		else
			str[i] = *s2++;
		i++;
	}
	str[len1 + len2] = '\0';
	return (str);
}
