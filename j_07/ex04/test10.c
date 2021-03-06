/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 17:26:32 by arohani           #+#    #+#             */
/*   Updated: 2017/03/28 14:27:35 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != ' ') //str[i] necessary to avoid segfault
			i++;
	}
	return (count);
}


int		ft_word_length(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

int		ft_word_transfer(char *str, char *dest)
{
	int n;
	int len;

	n = 0;
	len = ft_word_length(str, n);
	while (n < len)
	{
		dest[n] = str[n];
		n++;
	}
	dest[n] = 0;
	return (n);
}

char	**ft_split_whitespaces(char *str)
{
	char **dest;
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(dest = malloc(sizeof(*dest) * (ft_count_words(str) + 1))))
		return (0);
	while (j < ft_count_words(str) && str[i] != '\0')
	{
		if (!(dest[j] = (char*)malloc(sizeof(dest) * (ft_word_length((str + i), i) + 1))))
			return (0);
		i = i + ft_word_transfer((str + i), dest[j]);
		i++;
		j++;
	}

	//	while (n < ft_word_length(&str[i]))
	//	{
	//		dest[j][k] = str[n];
	//		n++;
	//		k++;
	//	}
	//	dest[j][k] = '\0';
	//	j++;
	dest[j] = 0;
	return (dest);
}


#include <stdio.h>

int main (int argc, char **argv)
{
	(void)argc;
	char **tab;
	int i;
	i = 0;
	tab = ft_split_whitespaces(argv[1]);
	while (i < ft_word_length(argv[1], i))
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}



