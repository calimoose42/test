/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 18:32:55 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 19:04:56 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != 0)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(int ac, char **av)
{
	char s1[20] = "              ";
	
	if (ac == 2)
	{
		printf("%s\n", ft_strcpy(s1, av[1]));
		printf("%s\n", strcpy(s1, av[1]));
	}
	else
		return (0);
}
