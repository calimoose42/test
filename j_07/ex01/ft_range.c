/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 12:39:38 by arohani           #+#    #+#             */
/*   Updated: 2017/03/24 14:11:19 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*result;
	int		i;

	if (min >= max)
		return (NULL);
	result = (int*)malloc(sizeof(*result) * ((max - min) + 1));
	i = 0;
	if (!result)
		return (NULL);
	while (min < max && result[i] != '\0')
	{
		result[i] = min;
		i++;
		min++;
	}
	result[i] = '\0';
	return (result);
}

int		main(void)
{
	printf("%p\n", ft_range(-2147483648, 2147483647));
	printf("%p\n", ft_range(0, 10));
	return (0);
}
