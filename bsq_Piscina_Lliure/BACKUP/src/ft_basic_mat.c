/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_mat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbacardi <pbacardi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:18:22 by pbacardi          #+#    #+#             */
/*   Updated: 2022/08/30 16:28:17 by hecrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//-------for testing------
#include <stdlib.h>
#include <stdio.h>

int	g_fail_after = 10;
int	g_num_alloc = 0;

void	*xmalloc(size_t size)
{
	g_num_alloc++;
	if (g_num_alloc >= g_fail_after)
	{
		return (0);
	}
	return (malloc(size));
}
#define malloc  xmalloc

//------------------------

//#include "ft_bsq.h"

void	ft_free_char(char **matrix, int i);

void	ft_free_int(int **matrix, int i);

// Creamos la matriz con malloc y la protegemos, free incluidos
char	**ft_create_matrix_char(int row, int col)
{
	char	**matrix;
	int		i;

	i = 0;
	matrix = (char **)malloc(row * sizeof(char *));
	if (!matrix)
		return (0);
	while (i < row)
	{
		matrix[i] = (char *)malloc(col * sizeof(char));
		if (!matrix[i])
		{
			ft_free_char(matrix, i);
			return (0);
		}
		i++;
	}
	return (matrix);
}

// Creamos la matriz con malloc y la protegemos, free incluidos
int	**ft_create_matrix_int(int row, int col)
{
	int	**matrix;
	int	i;

	i = 0;
	matrix = (int **)malloc(row * sizeof(int *));
	if (!matrix)
		return (0);
	while (i < row)
	{
		matrix[i] = (int *)malloc(col * sizeof(int));
		if (!matrix[i])
		{
			ft_free_int(matrix, i);
			return (0);
		}
		i++;
	}
	return (matrix);
}

//acortar lineas de la funcion ft_max_res
void	populate_res(int max, int i, int j, int *pos)
{
	pos[0] = max;
	pos[1] = i;
	pos[2] = j;
}

// Encontra el maximo de una matriz y devolvemos la posicion
int	*ft_max_mat(int **sqr, int row, int col)
{
	int	max;
	int	*pos;
	int	i;
	int	j;

	pos = malloc(3 * sizeof(int));
	if (!pos)
		return (0);
	max = 0;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (sqr[i][j] > max)
			{
				max = sqr[i][j];
				populate_res(max, i, j, pos);
			}
			j++;
		}
		i++;
	}
	return (pos);
}
