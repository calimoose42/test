/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 23:16:18 by arohani           #+#    #+#             */
/*   Updated: 2017/03/16 13:07:13 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
}

void		ft_putnbr(int nb)
{
	unsigned int nb1;			//unsigned int, since we take int value like -max int, 
								//unsigned int will be able to print positive version of that
								//since uns int range is larger positive
								//and our ft_putnbr has int as parameter, so nb will never be
								//greater than the max of unsigned int
	if (nb < 0)					//need to treat negatives and print them
	{
		ft_putchar('-');		//simply prints '-' then converts to '+' for next steps
		nb1 = -nb;
	}
	else
	{
		nb1 = nb;
	}
	if (nb1 >= 10)
	{
		ft_putnbr(nb1 / 10);		//need to print with ft_putchar, which has its limits
		ft_putnbr(nb1 % 10);		//recursive function takes n/10 as parameter and restarts
								//goal is to turn large # into individual digits of <10
								//so that ft_putchar can print in else statement
								//so large number keeps dividing by 10 and restarting until
								//first digit is retained, <10 and prints, then moves on to the next
								// % keeps remaining digits in the stack for eventual processing
	}
	else
	{
		ft_putchar(48 + nb1);		//finally prints a digit, one at a time
	}
}

int			main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-2147483647);
	return (0);
}
