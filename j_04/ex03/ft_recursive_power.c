/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 22:36:33 by arohani           #+#    #+#             */
/*   Updated: 2017/03/14 23:09:44 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

int	main()
{
	printf("%d", ft_recursive_power(3, 4));
	printf("\n");
	printf("%d", ft_recursive_power(10, -4));
	printf("\n");
	printf("%d", ft_recursive_power(14, 0));
	printf("\n");
	printf("%d", ft_recursive_power(0, 0));
	printf("\n");
	printf("%d", ft_recursive_power(182, 2));
	printf("\n");
	printf("%d", ft_recursive_power(13, 7));
}
