/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:12:59 by arohani           #+#    #+#             */
/*   Updated: 2017/03/16 16:58:11 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int result;			//to store chars of numbers as a single int
	int sign;	//to incorporate negative or positive sign

	i = 0;
	result = 0;
	sign = 1;

	while (str[i] == '\f' || str[i] == '\t'
				|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
				|| str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
	}
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

int	main(void)
{
	char str[] = "-123";
	printf("%d", ft_atoi("-123"));
	printf("\n");
	printf("%d", ft_atoi("\f123AB"));
	return (0);
}
