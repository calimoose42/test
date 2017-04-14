/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:12:17 by arohani           #+#    #+#             */
/*   Updated: 2017/03/14 10:50:04 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;						//create int i to start counter

	i = 0;						//counter starts from first element of array
	while (str[i] != '\0')		//i.e. while element doesn't = last element of string
	{
		ft_putchar(str[i]);		//put character of corresponding element
		i++;					//auto-increment to next string character
	}							//displays character from 1st element to last
}

int		main(void)
{
	char str[] = "coucou";		//put your test string inside of *string
	ft_putstr(str);				//put str here, which refers to &"coucou", used 
								//as parameter for ft_putstr
	return (0);
}
