/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 16:01:26 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 17:38:11 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char temp;
	char *ret;
	char *end;

	ret = str;
	end = str;
	end = end + ft_strlen(str) - 1;
	while (*str < *end)
	{
		temp = *str;
		*str = *end;
		*end = temp;
		str++;
		end--;
	}
	return (ret);
}

int		main(int ac, char **av)
{
	if (ac > 1)
		printf("%s", ft_strrev(av[1]));
	return (0);
}
