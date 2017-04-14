/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 16:49:16 by arohani           #+#    #+#             */
/*   Updated: 2017/03/12 13:51:43 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
}

void		ft_printabc(int a, int b, int c)	#created 2nd function to fulfill 25 line limit
{
	ft_putchar(a + 48);							#first prints a, then b, then c, all of which must fulfill conditions from ft_print_comb
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (!(a == 7 && b == 8 && c == 9))			#so long as abc is not 789, an additional ', ' will be printed between numbers. Stops at 789
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void		ft_print_comb(void)
{
	int a;										#declaration before defining and using a, b and c
	int b;
	int c;

	a = 0;										#all start at 0 before defining differences below
	b = 0;
	c = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)						#first loop whos conditions must be met before previous loops, i.e. while c = b+1,
			{										the loop will have c increase up to 9, regardless of b, before restarting at 0 and having b increase by 1
				ft_printabc(a, b, c);				#for each incremental increase in b, c goes thorugh entire loop. For each increase in a, b goes through whole loop
				c++;
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
