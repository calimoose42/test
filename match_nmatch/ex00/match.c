/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 14:48:48 by arohani           #+#    #+#             */
/*   Updated: 2017/03/19 16:52:40 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_match(char *s1, char *s2)
{
	//case 1 returns 2 things, 1st to test if s2 stays star until end of s1, then return (1)
	//2nd to test if s1 stays the same, does s2 change after *, then return (0)
	if (*s1 != '\0' && *s2 == '*')
		return ((ft_match((s1 + 1), s2)) || ft_match(s1, (s2 + 1)));
	//case 2 tests if s1 arrive at end of string, and s2 is *, is s2>s1, if so, return(1) ONLY
	//if characters that follow are all *
	if (*s1 == '\0' && *s2 == '*')
		return (ft_match(s1, (s2 + 1)));
	//case 3 tests if s1 = s2 and s1 is not yet complete, then increase both to test rest of s1/s2
	if (*s1 == *s2 && *s1 != '\0')
		return (ft_match((s1 + 1), (s2 + 1)));
	//case 4 says if both are equal and s1 is complete, and s2 is complete (after above tests)
	//then return (1)
	if (*s1 == *s2 && *s1 == '\0')
		return (1);
	//else case accounts for anything that doesn't work, then return 0, since recursive needs end
	else
		return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	return (ft_match(argv[1], argv[2]));
}
