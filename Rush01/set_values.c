/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 06:28:23 by esasal-i          #+#    #+#             */
/*   Updated: 2026/03/15 11:46:45 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	set_all_row(char **matrix, int x, int y, int dimension)
{
	//if (x == 0 || x)
}

void	set_one_value(char **matrix, int x, int y, int dimension)
{
	if (x == 0)
		matrix[x + 1][y] = '4';
	else if (y == 0)
		matrix[x][y + 1] = '4';
	else if (x > y)
		matrix[x - 1][y] = '4';
	else
		matrix[x][y - 1] = '4';
}

// direction is up down left right, so,
// will be only 1 or -1 (if x or y = 5 dir will be -1)
void	set_all_values(char **matrix, int x, int y, int direction)
{
	char	aux;
	char	counter;
	char	dir;

	counter = '1';
	dir = direction;
	if (x == 0 || x > y)
	{
		aux = matrix[x + direction][y];
		while (aux == '0')
		{
			matrix[x][y + direction] = counter;
			counter++;
			direction += dir;
		}
	}
}

//TODO: Dividir en dos funciones, pared techos y paredes, para reducir.
void	set_board_with_params(char **matrix, int dimension)
{
	int	counter;
	int	aux;
	int	col;
	int	row;

	aux = 0;
	row = 0;
	col = 1;
	counter = 0;
	while (++aux <= 2)
	{
		while (matrix[row][col + counter] != 'x')
		{
			printf("\n\n.....%d-%d......\n\n", row, col + counter);
			if (matrix[row][col + counter] == '1')
				set_one_value(matrix, row, col + counter, dimension);
			else if (matrix[row][col + counter] == '4')
			{
				if (row > col)
					set_all_values(matrix, row - 1, col + counter, -1);
				else
					set_all_values(matrix, row - 1, col + counter, 1);
			}
			counter++;
		}
		counter = 0;
		row = dimension - 1;
	}
	aux = 0;
	row = 1;
	col = 0;
	while (++aux <= 2)
	{
		while (matrix[row + counter][col] != 'x')
		{
			printf("\n\n.....%d-%d......\n\n", row, col + counter);
			if (matrix[row + counter][col] == '1')
				set_one_value(matrix, row + counter, col, dimension);
			counter++;
		}
		counter = 0;
		col = dimension - 1;
	}
}
