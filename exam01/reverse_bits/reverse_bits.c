/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 19:13:18 by exam              #+#    #+#             */
/*   Updated: 2017/03/17 19:18:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int temp;
	unsigned char *start;
	unsigned char *end;
	int i;

	start = &octet;
	i = 0;
	while (start[i] != '\0')
	{
		i++;
	}
}
