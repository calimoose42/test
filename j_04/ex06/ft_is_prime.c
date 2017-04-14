/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:54:42 by arohani           #+#    #+#             */
/*   Updated: 2017/03/15 19:36:14 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1 || nb == 4)
	{
		return (0);
	}
	if (nb == 3)
	{
		return (1);
	}
	while (i < (nb / 2)  && i < 46341)		//while just to increment i
	{										//46341 to save cpu (sqrt int max
									//will be highest factor < n / 2 )
		if	(nb % i == 0)			//within while, we have if to test each i
		{
			return (0);
		}
		i++;					//auto-increment after if, within while
	}
	return (1);				//return 1 for all valid numbers
}


int main()
{
	printf("%d", ft_is_prime(2));			//1
	printf("\n");
	printf("%d", ft_is_prime(4));			//0
	printf("\n");
	printf("%d", ft_is_prime(5));			//1
	printf("\n");
	printf("%d", ft_is_prime(2038074751));	//1
	printf("\n");							
	printf("%d", ft_is_prime(0));			//0
	printf("\n");
	printf("%d", ft_is_prime(-1888));		//0
	printf("\n");
	printf("%d", ft_is_prime(373587884));			//0
	printf("\n");
	printf("%d", ft_is_prime(169));			//0
	printf("\n");
	printf("%d", ft_is_prime(2252945251));	//prime, but past limit so 0
}
