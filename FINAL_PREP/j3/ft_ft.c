/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:04:50 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 15:06:55 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_ft(int *nbr)
{
	*nbr = 42;
}

int			main(void)
{
	int a;
	int *nbr;

	a = 10;
	nbr = &a;
	printf("%d\n", a);
	ft_ft(nbr);
	printf("%d\n", a);
}