/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 22:09:45 by arohani           #+#    #+#             */
/*   Updated: 2017/03/12 23:17:19 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int z;		//create temp variable
	
	z = *a;		//take *a, i.e. &var1, put it in z
	*a = *b;	//take *b, i.e. &var2, put it in *a i.e. &var1
	*b = z;		//take z, which has &var1, put it into *b i.e. &var2
}

int		main(void)
{
	int *a;
	int *b;
	int add1;
	int add2;


	add1 = 10;
	add2 = 20;
	a = &add1;
	b = &add2;

	printf("%d", add1);
	printf("%d", add2);
	ft_swap(a, b);
	printf("%d", add1);
	printf("%d", add2);
	return (0);
}
