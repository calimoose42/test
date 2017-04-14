/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:09:16 by arohani           #+#    #+#             */
/*   Updated: 2017/03/21 21:59:24 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nb1;

	nb1 = nb;
	if (nb1 < 0)
	{
		ft_putchar(45);
		nb1 = -nb1;
	}
	if (nb1 > 9)
	{
		ft_putnbr(nb1 / 10);
		ft_putnbr(nb1 % 10);
	}
	else
		ft_putchar(48 + nb1);
}

int		main(void)
{
	ft_putnbr(+-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(42);
}
