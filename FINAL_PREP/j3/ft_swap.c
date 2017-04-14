/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:36:03 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 15:41:24 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main()
{
	int *a;
	int *b;
	int add1;
	int add2;

	add1 = 10;
	add2 = 5;
	a = &add1;
	b = &add2;

	printf("%d\n", add1);
	printf("%d\n", add2);
	ft_swap(a, b);
	printf("%d\n", add1);
	printf("%d\n", add2);
}
