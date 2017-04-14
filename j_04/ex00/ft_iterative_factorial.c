/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 18:05:40 by arohani           #+#    #+#             */
/*   Updated: 2017/03/14 18:47:02 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;					//declares counter and factorial
	int factorial;

	i = 1;					//sets i and fact to 1 for while loop below
	factorial = 1;
	if (nb < 0 || nb > 12)	//takes care of errors
	{
		return (0);
	}
	if (nb ==  0)			//accounts for 0! = 1
	{
		return (1);
	}
	while (nb >= 1 && nb <= 12)		//nb >=1 (not >1) bc if nb != 1, last mult wont occur
	{
		factorial = factorial * i;	//goal is to simply multiply result of fact by i
		i++;						//instead of accounting for unknown # of multp
		nb--;						//nb-- and i++ until nb=1, can effectively do
	}								//nb! = (nb-1)! * nb
	return (factorial);				//returns result after loop is complete
}

int	main()
{
	printf("%d", ft_iterative_factorial(5));
	printf("\n");
	printf("%d", ft_iterative_factorial(0));
	printf("\n");
	printf("%d", ft_iterative_factorial(-33));
	printf("\n");
	printf("%d", ft_iterative_factorial(12));
	printf("\n");
	printf("%d", ft_iterative_factorial(13));
}
