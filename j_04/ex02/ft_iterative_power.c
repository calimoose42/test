/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 21:40:40 by arohani           #+#    #+#             */
/*   Updated: 2017/03/14 22:33:50 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = 1;
	i = 0;

	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		result = result * nb;	//1 * nb stores in result, then keeps * nb until #repetitions=pwr
		i++;
	}
	return (result);		//if power = 0, i !< pwr, but return (result) will give 1
}

int	main()
{
	printf("%d", ft_iterative_power(3, 4));		//should be 81
	printf("\n");
	printf("%d", ft_iterative_power(10, -4));	//should be 0
	printf("\n");
	printf("%d", ft_iterative_power(14, 0));	//should be 1
	printf("\n");
	printf("%d", ft_iterative_power(0, 0));		//should be 1
	printf("\n");
	printf("%d", ft_iterative_power(182, 2));	//should be 33124
	printf("\n");
	printf("%d", ft_iterative_power(13, 7));	//should be 62748517
}
