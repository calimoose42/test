/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 20:20:29 by exam              #+#    #+#             */
/*   Updated: 2017/03/17 20:40:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		temp;
	char	*end;
	char	*ret;

	temp = str;
	ret = end;
	end = str + ft_strlen(str) - 1;
	while (str < end)
	{
		*str = *end;
		*end = *ret;
		str--;
		end++;
	}
	return (str[]);
}
