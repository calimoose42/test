/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 19:25:22 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 20:10:08 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_repeat_alpha(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			count = str[i] - 96;
			while (count > 0)
			{
				ft_putchar(str[i]);
				count--;
			}
		}
		if (str[i] >= 65 && str[i] <= 90)
		{
			count = str[i] - 64;
			while (count > 0)
			{
				ft_putchar(str[i]);
				count--;
			}
		}
		if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122))
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_repeat_alpha(av[1]);
	else
		write (1, "\n", 1);
}
