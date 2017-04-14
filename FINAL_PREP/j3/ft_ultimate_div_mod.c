/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:48:17 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 15:55:12 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int		main()
{
	int add1;
	int add2;
	int *a;
	int *b;

	add1 = 10;
	add2 = 2;
	a = &add1;
	b = &add2;
	printf("%d\n", add1);
	printf("%d\n", add2);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", add1);
	printf("%d\n", add2);
}
