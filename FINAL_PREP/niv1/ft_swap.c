/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 19:05:32 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 19:08:29 by arohani          ###   ########.fr       */
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

int		main(void)
{
	int add1;
	int add2;
	int *a;
	int *b;

	add1 = 10;
	add2 = 20;
	a = &add1;
	b = &add2;
	printf("%d\n", add1);
	printf("%d\n", add2);
	ft_swap(a, b);
	printf("%d\n", add1);
	printf("%d\n", add2);
}
