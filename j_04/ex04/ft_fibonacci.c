/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 23:51:57 by arohani           #+#    #+#             */
/*   Updated: 2017/03/15 14:25:38 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int	main()
{
	printf("%d", ft_fibonacci(-3));
	printf("%d", ft_fibonacci(0));
	printf("%d", ft_fibonacci(1));
	printf("%d", ft_fibonacci(2));
	printf("%d", ft_fibonacci(3));
	printf("%d", ft_fibonacci(4));
	printf("%d", ft_fibonacci(5));
	printf("%d", ft_fibonacci(6));
	printf("%d", ft_fibonacci(7));
	printf("%d", ft_fibonacci(8));
}
