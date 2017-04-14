/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 19:49:29 by exam              #+#    #+#             */
/*   Updated: 2017/03/19 12:20:01 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <xlocale.h>

#include <stdio.h>

int		ft_do_op(const char *str1, const char *str2, const char *str3)
{
	int atol1;
	int atol3;
	int result;
	int i;

	i = 0;
	result = 0;
	atol1 = atol(str1);
	atol3 = atol(str2);
	while (atol1 > 0 && atol3 > 0 && (str3[i] == '+' ||
				str3[i] == '-' || str3[i] == '/' || str3[i] == '*'))
	{
		if (str3[0] == '+')
			result = atol1 + atol3;
		if (str3[0] == '/')
			result = atol1 / atol3;
		if (str3[0] == '*')
			result = atol1 * atol3;
		if (str3[0] == '-')
			result = atol1 - atol3;
		printf("%d", result);
	i++;
	}
	return (0);
}

int		main(void)
{
	const char *str1;
	const char *str2;
	const char *str3;

	printf("%d", ft_do_op("+244abb", "*", "2abcd"));
}
