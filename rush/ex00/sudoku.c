/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 11:53:37 by arohani           #+#    #+#             */
/*   Updated: 2017/03/18 12:21:26 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isvalid(int number, int puzzle[0][9], int row, int column)
{
	int i = 0;
	int sectorRow = 3*(row/3);
	int sectorCol = 3*(column/3);
	int row1 = (row + 2) % 3;
	int row2 = (row + 4) % 3;
	int col1 = (column + 2) % 3;
	int col2 = (column + 4) % 3;

	while (i < 9)
	{
		if (puzzle[i][column] == number)
			return (0);
		if (puzzle[row][i] == number)
			return (0);
		i++;
	}

	if (puzzle[row1 + sectorRow][col1 + sectorCol] == number)
		return (0);
	if (puzzle[row2 + sectorRow][col1 + sectorCol] == number)
		return (0);
	if (puzzle[row1 + sectorRow][col2 + sectorCol] == number)
		return (0);
	if (puzzle[row2 + sectorRow][col2 + sectorCol] == number)
		return (0);
	return (1);
}

int		ft_sudoku_solver(int puzzle[][9], int row, int column)
{
	int nextnumber = 1;
	if (row == 9)
		return 1;
	if (puzzle[row][column])
	{
		if (column == 8)
		{
			if (ft_sudoku_solver(puzzle, row + 1, 0))
				return (1);
			else
			{
				if (ft_sudoku_solver(puzzle, row, column + 1))
					return (1);
			}
			return (0);
		}
	}
}

int		main(void)
{
	ft_isvalid(number, puzzle[][], row, column);
	ft_sudoku_solver(puzzle[][], row, column);
}
