/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 19:09:12 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 19:19:17 by arohani          ###   ########.fr       */
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
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	*ft_strrev(char *str)
{
	char temp;
	char *ret;
	char *end;

	ret = str;
	end = str;
	end = end + ft_strlen(str) - 1;
	while (str < end)
	{
		temp = *str;
		*str = *end;
		*end = temp;
		str++;
		end--;
	}
	return (ret);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr(ft_strrev(av[1]));
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}
