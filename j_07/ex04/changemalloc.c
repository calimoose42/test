/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 17:26:32 by arohani           #+#    #+#             */
/*   Updated: 2017/03/28 16:12:01 by arohani          ###   ########.fr       */
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


int		ft_word_length(char *str)
{
	int i;
	int count;
	char **dest;
	int j;

	j = 0;
	while (str[i])
	{
		count = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
		while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			count++;
			i++;
		}
		break;
	}
	if (!(dest[j] = (char*)malloc(sizeof(dest) * (count + 1))))
		return (0);
	return (count);
}

int		ft_word_transfer(char *str, char *dest)
{
	int i;
	int j;

	i = 0;
	j = ft_word_length(str);
	while (i < j)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char **dest;
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	if (!(dest = (char**)malloc(sizeof(*dest) * (ft_count_words(str) + 1))))
		return (0);
	while (j < ft_count_words(str) && str[i])
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{	
			ft_word_length(str);
			i = i + ft_word_transfer((str + i), dest[j]);
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
	}
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
	while (i < ft_word_length(argv[1]))
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}



