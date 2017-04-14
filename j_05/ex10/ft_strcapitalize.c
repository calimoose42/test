/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 23:37:30 by arohani           #+#    #+#             */
/*   Updated: 2017/03/21 23:55:08 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')	//go through string till end
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (i > 0 && !(str[i - 1] >= 'a' && str[i - 1] <= 'z') &&
				!(str[i - 1] >= '0' && str[i - 1] <= '9') &&
				!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strcapitalize(argv[1]));
	else
		return (0);
}
