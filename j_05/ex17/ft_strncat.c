/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:08:34 by arohani           #+#    #+#             */
/*   Updated: 2017/03/21 17:48:14 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, int nb)
{
	int i;

	i = 0;
	while (src[i] != '\0' && nb > 0)
	{
		dest[i] = src[i];
		i++;
		nb--;
	}
	while (nb > 0)
	{
		dest[i] = '\0';
		i++;
		nb--;
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)	//similar to strcat but use strncpy for nb limit
{
	ft_strncpy(&dest[strlen(dest)], src, nb);
	return (dest);
}

int		main(int argc, char **argv)
{
	char *ptr;
	char *ptr2;
	int nb;

	nb = 12;
	ptr = malloc(100);
	ptr2 = malloc(100);
	ft_strncpy(ptr, argv[1], nb);
	ft_strncpy(ptr2, argv[1], nb);

	if (argc == 3)
	{
		printf("%s\n", strncat(ptr, argv[2], nb));
		printf("%s\n", ft_strncat(ptr2, argv[2], nb));
	}
	return (0);
}
