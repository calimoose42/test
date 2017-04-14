/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usingfn_is_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 18:23:52 by arohani           #+#    #+#             */
/*   Updated: 2017/03/15 19:36:24 by arohani          ###   ########.fr       */
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
	while (i < (nb / 2) && i < 46341)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

int main()
{
printf("%d\n", ft_find_next_prime(-284978));
printf("%d", ft_find_next_prime(3));
printf("\n");
printf("%d", ft_find_next_prime(373587884));	//expect 373,587,911
printf("\n");
printf("%d", ft_find_next_prime(15485864));		//expect 15,485,867
}
