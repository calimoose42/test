/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 21:49:24 by arohani           #+#    #+#             */
/*   Updated: 2017/03/21 23:11:57 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;	  								 //n - 1 bc if n = 4, corresponding
		n--;
	}										//element is i = 3
	return (*s1 - *s2);
}												//necesary bc last i++ brings it up to
										//3 even with <, since that's how
										//exit is defined
										//else return necessary bc without it
					//limiting i to n-1 will keep it in while
								//loop as s1 and s2 aren't at '\0'
								//yet don't have exit with if alone

int		main(int argc, char **argv)
{
	unsigned int n;

	n = 4;
	if (argc == 3)
	{
		printf("%d\n", strncmp(argv[1], argv[2], n));
		printf("%d", ft_strncmp(argv[1], argv[2], n));
	}
	else
		return (0);
}
