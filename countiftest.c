/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:52:08 by arohani           #+#    #+#             */
/*   Updated: 2017/04/12 14:16:01 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (tab[i] != 0)				//either use 0 or '\0', using '0' simply checks for char 0, not NULL
	{
		if ((*f)(tab[i]) == 1)		//add (*f) for norme and to make clear that we're using a pointer to a fn
			result++;
		i++;
	}
	return (result);
}

int	cmp(char *str)
{
	return (*str == 'w');
}

int main(void)
{
	char *t[] = { "wololo", "walala", "wilili", "zololo", 0 };
	printf("%d\n", ft_count_if(t, cmp));
}
