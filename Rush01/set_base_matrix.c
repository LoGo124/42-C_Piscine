/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_base_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 05:29:58 by esasal-i          #+#    #+#             */
/*   Updated: 2026/03/15 16:10:42 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	**create_matrix(int max_rows, int max_cols)
{
	char	**matrix;
	int		row;
	int		col;

	matrix = (char **)malloc(max_rows * max_cols * sizeof(char));
	row = -1;
	col = -1;
	while (row++ < max_rows - 1)
	{
		matrix[row] = (char *)malloc(max_cols * sizeof(char));
		while (col++ < max_cols - 1)
		{
			if (col == 0 || row == 0 || \
col == max_cols - 1 || row == max_rows - 1)
				matrix[row][col] = 'x';
			else
				matrix[row][col] = '0';
		}
		col = -1;
	}
	return (matrix);
}

//group = 0 if upper row, 1 if lower (colup, coldown, colleft, colright)
void	set_row(char *row, char *params, int group, int dimension)
{
	int	counter;
	int	multiplier;
	int	col;

	col = 1;
	multiplier = (dimension * 2);
	counter = group * multiplier;
	while (counter < (group + 1) * multiplier)
	{
		row[col] = params[counter];
		counter += 2;
		col++;
	}
}

//group = 2 if left col, 3 if right one (colup, coldown, colleft, colright)
void	set_col(char **matrix, char *params, int group, int dimension)
{
	int	counter;
	int	multiplier;
	int	row;
	int	col;

	if (group == 2)
		col = 0;
	else
		col = dimension + 1;
	row = 1;
	multiplier = (dimension * 2);
	counter = group * multiplier;
	while (counter < (group + 1) * multiplier)
	{
		matrix[row][col] = params[counter];
		counter += 2;
		row++;
	}
}
