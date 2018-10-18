/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlechien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 13:16:23 by tlechien          #+#    #+#             */
/*   Updated: 2018/10/17 14:55:35 by tlechien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_amount(char const *s, char c)
{
	int	i;
	int	word_count;
	int	counting;

	i = 0;
	counting = 0;
	word_count = 0;
	while (s && s[i])
	{
		if (s[i] != c && !counting++)
			word_count++;
		if (s[i] == c && counting)
			counting = 0;
		i++;
	}
	return (word_count);
}

static int	w_length(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static void	word_add(char *word_slot, char const *str, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		word_slot[i] = str[i];
		i++;
	}
	word_slot[len] = '\0';
}

static void	free_array(char **array, int len)
{
	while (len-- > 0)
		free(array[len]);
	free(array);
}

char		**ft_strsplit(char const *s, char c)
{
	int		w_count;
	int		w_count_tot;
	char	**word_list;

	w_count_tot = word_amount(s, c);
	if (!s || !(word_list = (char**)malloc(sizeof(char*) * w_count_tot + 1)))
		return (NULL);
	w_count = 0;
	while (*s && w_count < w_count_tot)
	{
		if (*s != c)
		{
			if (!(word_list[w_count] = (char*)malloc(w_length(s, c) + 1)))
			{
				free_array(word_list, w_count);
				return (NULL);
			}
			word_add(word_list[w_count++], s, w_length(s, c));
			s += w_length(s, c);
		}
		s++;
	}
	word_list[w_count] = 0;
	return (word_list);
}
