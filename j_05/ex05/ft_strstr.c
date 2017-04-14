/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 17:11:13 by arohani           #+#    #+#             */
/*   Updated: 2017/03/22 12:44:46 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')	//for when to_find is null
		return (str);
	while (str[i] != '\0')
	{
		j = 0;		//to restart j counter for to_find if to_find isnt full match but may be later
		while (str[i + j] == to_find[j]) //run through all of to_find
									//and while both strings ==, then increase both
									//until end of to_find, then
									//return address of str[str + i] to return string 
									//with starting point of match in to_find
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;		//to finish scanning through str for any matches with to_find
	}
	return (0);			//for when to_find doesn't exist in str
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%s\n", strstr(argv[1], argv[2]));
	printf("%s\n", ft_strstr(argv[1], argv[2]));
}
