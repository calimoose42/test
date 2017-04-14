/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 12:54:13 by arohani           #+#    #+#             */
/*   Updated: 2017/03/28 18:36:21 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;
	
	if (min >= max)			//same as ex01 except allocate and assign an array of ints instead of returning an array of ints
		return (0);
	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min)))) //allocates array of ints depending on max - min value
			return (0);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;		//increment one by one until i < (max - min)
		i++;
	}
	*range = tab;
	return (i);
}

int		main()
{
	int **range;
	int min;
	int max;
	
	min = 0;
	max = 10;
	ft_ultimate_range(range, min, max);
}
