/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_mat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:18:22 by pbacardi          #+#    #+#             */
/*   Updated: 2022/08/30 19:20:25 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//-------for testing------
#include <stdlib.h>
#include <stdio.h>


#include "../include/bsq.h"

void	ft_free_char(char **matrix, int i);

void	ft_free_int(int **matrix, int i);

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

void	populate_res(int max, int i, int j, int *pos)
{
	pos[0] = max;
	pos[1] = i;
	pos[2] = j;
}

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
