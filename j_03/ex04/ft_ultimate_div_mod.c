/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 10:19:48 by arohani           #+#    #+#             */
/*   Updated: 2017/03/13 11:08:41 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a;				//make temporary ints to store / and % results
	int temp_b;				//not doing so will change modulo param after / occurs
	
	temp_a  = (*a) / (*b);	//stores / into temp
	temp_b  = (*a) % (*b);	//stores % into temp
	*a = temp_a;			//redefines pointers to hold correct parameters
	*b = temp_b;			//instead of having / change value for *a in mod
}

int		main(void)
{
	int *a;
	int *b;
	int storea;
	int storeb;

	storea = 245;
	storeb = 10;
	a = &storea;
	b = &storeb;
	printf("%d", storea);
	printf("%d", storeb);
	ft_ultimate_div_mod(a, b);
	printf("%d", storea);
	printf("%d", storeb);
	return (0);
}
