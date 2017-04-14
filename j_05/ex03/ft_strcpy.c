/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:56:00 by arohani           #+#    #+#             */
/*   Updated: 2017/03/20 15:53:48 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';		//dest[i], not [i+1] because after last iteration in while, we
	return (dest);		//exit the while loop with a value of '\0', so need to simply 
}						//say dest[i] = '\0' to fill the last element with null

int		main(int argc, char **argv)
{
	char	dest[20] = "                ";
	if (argc != 2)
		return (0);
	else
	{
		printf("%s\n", strcpy(dest, argv[1]));	//argv[1] is source, NOT dest
		printf("%s\n", ft_strcpy(dest, argv[1]));
	}
}
