/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 19:17:46 by arohani           #+#    #+#             */
/*   Updated: 2017/03/30 11:42:17 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i])
		i++;
	dest = (char*)malloc(sizeof(*dest) * (i + 1));
	j = 0;
	if (!dest)
		return (NULL);
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*store;
	int			i;

	if (!(store = (t_stock_par*)malloc(sizeof(*store) * ac + 1)))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		store[i].size_param = ft_strlen(av[i]);
		store[i].str = av[i];
		store[i].copy = ft_strdup(av[i]);
		store[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	store[i].str = 0;
	return (store);
}
