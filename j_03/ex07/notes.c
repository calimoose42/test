/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:55:31 by arohani           #+#    #+#             */
/*   Updated: 2017/03/14 11:05:32 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// prototype has two purposes: tell compiler that functions exist somewhere in document, so you can call th
// functions before you define them properly

int	ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	char temp; // temporary buffer/variable used during swap process
	char *end; // will be set to the last character in the string
	char *ret; // copy of str to know where the string is in memory
			   // necessary because we will be moving the str pointer around, so that wont tell us where 
			   // the string starts in memory

	ret = str; // set copy of str (mem address)
	end = str; // set second copy of str
	
	end = ft_strlen(str); // increment end pointer by the number of elements in str
	while (str < end) // loop through string until str and end pointer meet. when they meet, the string wi						 // will be in reverse order, works for even and uneven length strings
	{
		// execute swap process on the values that str and end point to respectively
		temp = *str; // temp safe str value
		*str = *end; // set str value to end value
		*end = temp; // set end value to temp value (which holds original str value)
		
		// shift str pointer one element to the right
		// shift end pointer one element to the left (that way, theyll eventually meet in the middle)
		str++;
		end--;	
	}
	// return original mem address of start of string str (this points to beginning of the reversed string)
	return (ret);
}

int	ft_strlen(char *str)
{
	// counter for while loop
	int i;

	// initialize counter
	i = 0;
	// loop through string until end of string character is found
	while(*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	//char* str;
	//str = malloc(100);
	//str = "hello"; 

	char str2[] = "hello";

	// THIS WONT WORK BECAUSE ITS READ ONLY MEMORY char *str3 = "hello";
	
	printf("%s", ft_strrev(str2));
}
