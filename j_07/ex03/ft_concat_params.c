/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 14:10:09 by arohani           #+#    #+#             */
/*   Updated: 2017/03/28 19:08:52 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)	//used to count total elements of all arguments later
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int		ft_big_strlen(int argc, char **argv)
{
	int i;
	int b;

	i = 1;
	b = 0;
	while (i < argc)
	{
		b += ft_strlen(argv[i]);	//b = b + length of argv[i]
		i++;						//then b = length of argv[i] + len argv[i+1]
	}								//until last incrementation where i = argc therefore b value is set
	return (b);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *str;
	int i;						//used for elements of big concatenated array
	int j;						//used for elements of each string of argv
	int count;					//first used to allocate memory for big single dimension array
								//then set to 1 in order to refer to each argv
	i = 0;
	count = ft_big_strlen(argc, argv);
	if ((str = (char*)malloc(sizeof(*str) * count)) == NULL)
		return (NULL);
	count = 1;				//this way we start with argv that is not == binary file
	while (count < argc)	//argv that we scan will be argc - 1, so once count = argc, stop loop and close big string
	{
		j = 0;
		while (argv[count][j])	//start putting each element of argv[1] into big string
		{
			str[i] = argv[count][j];
			i++;
			j++;
		}
		str[i] = (count++ == argc - 1) ? '\0' : '\n';	//once argv[count][j] hits '\0', increment count
											//every time we hit '\0', we add \n, increment count and analyze argv[1 + count]
											//until last incrementation where count = argc - 1 (since dealing with
											//all arguments except for a.out), end of while loop, terniary says put '\0' to finish big string
		i++;		//increment i because 0 element of next argv is i'th element of big string
	}
	return (str);
}
	
int		main(int argc, char **argv)
{
	if (argc > 1)
		printf("%s", ft_concat_params(argc, argv));
	return (0);
}
