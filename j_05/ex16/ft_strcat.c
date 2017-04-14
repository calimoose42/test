/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 14:27:04 by arohani           #+#    #+#             */
/*   Updated: 2017/03/21 22:13:10 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)	//will use strcpy and strlen in final function
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)	//stringlength used to know where to insert copy
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(&dest[ft_strlen(dest)], src);	//use strlen to get the address of the final dest char
	return (dest);			//you add source starting from this final dest char
}							//to give you a string like "destinationsource"
							//ie instead of copying to 'replace', we copy and add after

int		main(int argc, char **argv)
{
	char *ptr;
	char *ptr2;

	ptr = malloc(100);
	ptr2 = malloc(100);
	ft_strcpy(ptr, argv[1]);
	ft_strcpy(ptr2, argv[1]);

	if (argc == 3)
	{
		printf("%s\n", ft_strcat(ptr2, argv[2]));
//		printf("%s\n", strcat(ptr2, argv[2]));
	}
	else
		return (0);
}
