/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 19:01:32 by arohani           #+#    #+#             */
/*   Updated: 2017/03/14 20:34:44 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}											//if nb = 5
}				//return 5 * ft(4) >> 5 * 4 * ft(3) >> 5 * 4 * 3 * ft(2) >>
												// > 5 * 4 * 3 * 2 * ft(1)
int	main()				//ft(1) returns 1, so finally
{						//return (nb * (nb - 1)) can execute, as returning 1 completes the cycle
	printf("%d", ft_recursive_factorial(5));	//within the () of return, thus telling return
	printf("\n");								//exactly what to return
	printf("%d", ft_recursive_factorial(0));
	printf("\n");
	printf("%d", ft_recursive_factorial(-33));
	printf("\n");
	printf("%d", ft_recursive_factorial(12));
	printf("\n");
	printf("%d", ft_recursive_factorial(13));
}
