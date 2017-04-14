/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lettercount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 18:56:00 by arohani           #+#    #+#             */
/*   Updated: 2017/03/27 19:11:23 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_word_length(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			count++;
			i++;
		}
		break;		//breaks loop and returns count to count first word if 
					//preceded by several blank spaces or tabs or breaklines
	}
	return (count);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d", ft_word_length(av[1]));
}
