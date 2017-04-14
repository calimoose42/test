/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 14:06:54 by arohani           #+#    #+#             */
/*   Updated: 2017/03/12 12:36:53 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>						#necessary for using write

void	ft_putchar(char c)				#includes write, void to ignore return as return is in main()
{
	write (1, &c, 1);					#will write once main calls ft_print_alph which calls ft_putchar
}

void	ft_print_alphabet(void)			#creation of function. void void to not return anything (see main) and to take no  parameters
{
	int i;								#declare your parameter, which will be defined in arguments below for function to interpret

	i = 'a';
	while (i <= 'z')					#while to say what to print and when. Operators in argument possible with int
	{
		ft_putchar(i);					#ftputchar to print (desired character)
		i++;							#after it prints, redefine i for next step of loop, loop will continue until i > z
	}									#after putting i here, the putchar up top will use i for char c to print
}

int		main(void)						#main is starting point. int to return something, void to show main takes no parameters
{
		ft_print_alphabet();			#f_() to show this function takes unspecified number of parameters
		return (0);						#return to print result to standard output
}
