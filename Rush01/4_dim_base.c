/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_dim_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 02:37:02 by esasal-i          #+#    #+#             */
/*   Updated: 2026/03/15 11:54:57 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//deprecated
void	print_matrix(char matrix[6][6], int dev)
{
	int	dimension;
	int	col;
	int	row;

	printf("entering print matrix\n\n");
	dimension = 4;
	col = -dev;
	row = -dev;
	while (++row <= dimension + dev)
	{
		while (++col <= dimension + dev)
			write(1, &matrix[row][col], 1);
		col = -dev;
		write(1, "\n", 1);
	}
}

//the only valid
void	print_matrix_ptr(char **matrix, int rows, int cols, int dev)
{
	int	dimension;
	int	col;
	int	row;

	dimension = 4;
	col = -dev;
	row = -dev;
	while (++row < rows + dev - 1)
	{
		while (++col < cols + dev - 1)
			write(1, &matrix[row][col], 1);
		col = -dev;
		write(1, "\n", 1);
	}
}

//please delete me asap
//Only for 4x4 dimension return -1 some kind of error, 0 ok,
//more than 1, undefined possible codes
void	ft_basic_matrix_preparation(char (*dst)[6][6], char *str, int dim)
{
	char	matrix[6][6];
	int		counter;
	int		aux;

	counter = 0;
	aux = 0;
	matrix[0][0] = 'x';
	matrix[5][0] = 'x';
	matrix[0][5] = 'x';
	matrix[5][5] = 'x';
	matrix[0][1] = str[2 * 0];
	matrix[0][2] = str[2 * 1];
	matrix[0][3] = str[2 * 2];
	matrix[0][4] = str[2 * 3];
	matrix[1][0] = str[2 * 4];
	matrix[2][0] = str[2 * 5];
	matrix[3][0] = str[2 * 6];
	matrix[4][0] = str[2 * 7];
	matrix[1][5] = str[2 * 8];
	matrix[2][5] = str[2 * 9];
	matrix[3][5] = str[2 * 10];
	matrix[4][5] = str[2 * 11];
	matrix[5][1] = str[2 * 12];
	matrix[5][2] = str[2 * 13];
	matrix[5][3] = str[2 * 14];
	matrix[5][4] = str[2 * 15];
	while (aux++ < 4)
	{
		while (counter++ < 4)
			matrix[aux][counter] = '0';
		counter = 0;
	}
	aux = -1;
	counter = aux;
	/*while (aux++ < 6)
	{
		*test = matrix[aux];
		*test++;
		printf("\nx:%d->", aux);
		while ( counter++ < 6 )
		{
			*dst[aux][counter] = matrix[aux][counter];
			printf("y:%d ", counter);
		}
		counter = -1;
	}*/
	//print_matrix(matrix, 1);
}
