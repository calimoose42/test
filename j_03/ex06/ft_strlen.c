/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:39:59 by arohani           #+#    #+#             */
/*   Updated: 2017/03/14 10:54:56 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)	//DON'T FORGET, int NOT void type, since returning (i)
{
	int i;

	i = 0;					//starts counter from first char of string
	while (str[i] != '\0')	//ends counter at end of string ie '\0'
	{
		i++;				//auto increments i
	}
	return (i);				//once loop is done, return (i) which is now 
							//the count of the last char in string
}

int		main(void)
{
	char str[] = "racecar";	//type your string here, ft_str points to address of first letter of this string
	printf("%d", ft_strlen(str));	//print to test, so that return (i) works
	return (0);
}
