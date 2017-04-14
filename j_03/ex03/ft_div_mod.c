/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 23:42:25 by arohani           #+#    #+#             */
/*   Updated: 2017/03/12 23:50:41 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;		//takes (a / b) and puts it in *div
	*mod = a % b;		//takes (a % b) and puts it in *mod
}

int		main(void)
{
	int *div;
	int *mod;
	int a;
	int b;
	int add1;
	int add2;

	a = 145;
	b = 10;
	add1 = 5;
	add2 = 3;
	div = &add1;
	mod = &add2;

	printf("%d", add1);
	printf("%d", add2);
	ft_div_mod(a, b, div, mod);
	printf("%d", add1);
	printf("%d", add2);
	return (0);
}
