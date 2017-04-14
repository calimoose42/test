/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 21:53:33 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 22:14:31 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_last_word(char *str)
{
	int i;
	char *end;

	i = ft_strlen(str) - 1;
	while (str[i] != '\0' && i > 0)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || i == 0 || i == (ft_strlen(str) - 1))
		{
			while (str[i] != '\0')
			{
				i++;
				ft_putchar(str[i]);
			}
		}
		i--;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	return (0);
}		
