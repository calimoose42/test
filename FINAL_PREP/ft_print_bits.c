/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 12:01:32 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 12:04:17 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_print_bits(unsigned char octet)
{
	unsigned int i;

	i = 1 << 7;
	while (i > 0)
	{
		if (i & octet)
			write (1, "1", 1);
		else
			write (1, "0", 1);
		i = i >> 1;
	}
}

int		main(int ac, char **av)
{
	printf("%d\n", ft_print_bits(42));
	printf("%d\n", ft_print_bits(2));
	return (0);
}
