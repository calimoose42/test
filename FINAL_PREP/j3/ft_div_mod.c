/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:41:39 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 15:47:26 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main()
{
	int a;
	int b;
	int *div;
	int *mod;
	int add1;
	int add2;

	a = 10;
	b = 5;
	add1 = 27;
	add2 = 3;
	div = &add1;
	mod = &add2;
	printf("%d\n", add1);
	printf("%d\n", add2);
	ft_div_mod(a, b, div, mod);
	printf("%d\n", add1);
	printf("%d\n", add2);
}
