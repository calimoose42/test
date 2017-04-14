/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 15:05:02 by arohani           #+#    #+#             */
/*   Updated: 2017/03/21 16:41:44 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;				//unsigned int n is the # of char to be copied from source
	while (src[i] != '\0' && n > 0) //first while to go until end of src
	{								//and copy into dest
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)	//second loop to continue to add 0 for n characters after 
	{				//end of source string
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}

int		main(int argc, char **argv)
{
	char	dest[30] = "                           ";

	unsigned int n;
	n = 15;
	if (argc == 2)			//call with ./a.out "str1" "str2"; (do NOT include
								//echo $? unless you don't use printf in main
	{
		printf("%s\n", strncpy(dest, argv[1], n));
		printf("%s\n", ft_strncpy(dest, argv[1], n));
	}
	return (0);
}
