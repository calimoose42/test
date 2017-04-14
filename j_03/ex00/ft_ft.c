/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:50:54 by arohani           #+#    #+#             */
/*   Updated: 2017/03/13 18:53:56 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>			//necessary to use print for testing

void	ft_ft(int *nbr)		//takes pointer to int as parameter
{
	*nbr  = 42;				//sets value to that int i.e.  pointer
}

int		main(void)			
{
	int		a;				//declares reference variable and pointer
	int		*nbr;

	a = 21;
	nbr = &a;				//links pointer to reference variable's address				
						
	printf("%d", a);		//print a to verify a's original value
	ft_ft(nbr);				//run function with nbr. *nbr will then say that 42 will go into the address of where *nbr points, therefore into a
	printf("%d", a);		//print to verify a's value has changed via pointer
	return (0);
}
