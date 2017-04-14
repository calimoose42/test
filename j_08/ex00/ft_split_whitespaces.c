/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 18:05:54 by arohani           #+#    #+#             */
/*   Updated: 2017/03/28 18:07:17 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			n++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (n);
}

int		ft_word_length(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

int		ft_word_transfer(char *str, char *word)
{
	int i;
	int j;

	i = 0;
	j = ft_word_length(str);
	while (i < j)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	i = 0;
	j = 0;
	k = ft_count_words(str);
	if (!(dest = malloc(sizeof(dest) * (k + 1))))
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			k = ft_word_length(str + i);
			if (!(dest[j] = malloc(sizeof(*dest) * (k + 1))))
				return (0);
			i = i + ft_word_transfer((str + i), dest[j]);
			j++;
		}
	}
	dest[j] = 0;
	return (dest);
}
