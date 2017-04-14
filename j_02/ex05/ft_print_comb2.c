/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 19:20:35 by arohani           #+#    #+#             */
/*   Updated: 2017/03/12 17:10:20 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
}

void		ft_print_comb2(void)
{
	int a;								
	int b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a +1;
		while (b <= 99)					//	#b loop to have b continue to increase up to 99 before a increases
		{								//	#a loop has a go up by 1 for every time b loop finishes
			ft_putchar(a / 10 + 48);	//	#at each step, /10 and %10 effectively print 2 digits
			ft_putchar(a % 10 + 48);	//	#space between both double-digit numbers before ', '
			ft_putchar(' ');
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			if (!(a == 98 && b == 99))	//	#if has ', ' print so long as a !=98 AND b != 99
					{
					ft_putchar(',');
					ft_putchar(' ');
					}
					b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}				
