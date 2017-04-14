/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 20:11:09 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 20:35:11 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			str[i] += 13;
		else if (str[i] > 'm' && str[i] <= 'z')
			str[i] -= 13;
		else if (str[i] >= 'A' && str[i] <= 'M')
			str[i] += 13;
		else if (str[i] > 'M' && str[i] <= 'Z')
			str[i] -= 13;
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		ft_putstr(ft_rot13(av[1]));
		ft_putchar('\n');
	}
}
