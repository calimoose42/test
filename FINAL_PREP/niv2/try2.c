/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 21:53:33 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 22:20:10 by arohani          ###   ########.fr       */
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
	while (str[i] != '\0' && i > 0 && str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
		i--;
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || i == 0 || i == (ft_strlen(str) - 1))
	{
		while (str[i + 1] != '\0' && str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\t')
		{
			ft_putchar(str[i + 1]);
			i++;
		}
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	return (0);
}		
