/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 11:01:14 by arohani           #+#    #+#             */
/*   Updated: 2017/03/15 12:58:00 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (nb < 0 || nb > 2147483647)
	{
		return (0);
	}
	while (nb >= 0 && nb < 2147483647 && i < 46341)
	{
		result = i * i;
		if (nb == result) 
		{
			return (i);
		} 
		if (nb < i)
		{
			return (0);
		}
		i++;
	}
	return (0);		//our function returns int, so MUST return an int in the end
}

int	main()
{
	printf("%d", ft_sqrt(9));
	printf("\n");
	printf("%d", ft_sqrt(144));
	printf("\n");
	printf("%d", ft_sqrt(-16));
	printf("\n");
	printf("%d", ft_sqrt(15));
	printf("\n");
	printf("%d", ft_sqrt(2147483646));
	printf("\n");
	printf("%d", ft_sqrt(2147395600));
}
