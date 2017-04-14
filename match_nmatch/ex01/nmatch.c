/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 16:55:46 by arohani           #+#    #+#             */
/*   Updated: 2017/03/19 17:01:38 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return ((nmatch((s1 + 1), s2)) + nmatch(s1, (s2 + 1)));
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, (s2 + 1)));
	if (*s1 == *s2 && *s1 != '\0')
		return (nmatch((s1 + 1), (s2 + 1)));
	if (*s1 == *s2 && *s1 == '\0')
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	return (nmatch(argv[1], argv[2]));
}
