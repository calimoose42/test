/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clem.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:12:49 by arohani           #+#    #+#             */
/*   Updated: 2017/03/28 18:27:34 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_count_words(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') //skips all spaces
			i++;
		if (str[i])	//if string still not at end after passing white spaces, increment n
			n++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') //skip again through white spaces
			i++;					//before resuming loop and counting n for every word between spaces till
									//end of string
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
	j = ft_word_length(str);	//we fill up destination word with each char of str until end of str (i.e. word length is reached)
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
	int i;
	int j;
	int k;
	char **dest;

	i = 0;
	j = 0;
	k = ft_count_words(str);				//use count words to know how much to malloc for 2d array
	if (!(dest = malloc(sizeof(dest) * (k + 1))))	//+ 1 to account for last element of array = 0
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;					//skip through white spaces
		if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			k = ft_word_length(str + i);	//when no white spaces, get word length at new i, which counts until sapces
			if (!(dest[j] = malloc(sizeof(*dest) * (k + 1)))) //malloc to allocate memory for word i.e. str[i]
				return (NULL);							//when done with if statement, continue while loop once incrementing
		   											//j, and will arrive at if statement with a new value for i	
			i = i + ft_word_transfer((str + i), dest[j]);	//puts each char of str into first element of **dest
			j++;			//ft-word_transfer goes until end of word, then adds null finisher, then we increment j++ to do next word
		}
	}
	dest[j] = 0;			//must make last element of 2d array 0
	return (dest);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 0)
		return (-1);
	ft_print_words_tables(ft_split_whitespaces(av[1]));
	return (0);
}
