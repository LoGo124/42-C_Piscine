/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:43:16 by bimartin          #+#    #+#             */
/*   Updated: 2022/08/31 01:09:33 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

//---------for testing---------

#include <stdio.h>
char	**ft_create_matrix_char(int row, int col);
int	**ft_create_matrix_int(int row, int col);

//-----------------------------

//#inlcude "bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_row(char **map, char cond, t_box current)
{
	int	num;

	num = 0;
	while (num < current.size)
	{
		if (map[current.row + current.size - 1][current.col + num] == cond)
			return (0);
		num++;
	}
	return (1);
}

int	ft_check_col(char **map, char cond, t_box current)
{
	int	num;

	num = 0;
	while (num < current.size)
	{
		if (map[current.row + num][current.col + current.size - 1] == cond) 
			return (0);
		num++;
	}
	return (1);
}

int	ft_check_square(char **map, char cond, t_box current)
{
	int	cont;

	cont = 0;
	if (ft_check_row(map, cond, current) && ft_check_col(map, cond, current))
		return (1);
	else
		return (0);
}

int	**ft_process_map(char **map, char cond, int *mat_info)
{
	int	i;
	int	j;
	int	**sqr;
	t_box	current;

	sqr = ft_create_matrix_int(mat_info[0], mat_info[1]);
	if (!sqr)
		return (0);
	j = 0;
	while (j < mat_info[0])
	{
		i = 0;
		while (i < mat_info[1])
		{
			current.row = j;
			current.col = i;
			current.size = 0;
			while (current.size <= mat_info[0] - current.row && current.size <= mat_info[1] - current.col)
			{
				if (ft_check_square(map, cond, current))
					current.size++;
				else
					break ;
			}
			sqr[j][i] = current.size - 1;
			i++;
		}
		j++;
	}
	return (sqr);
}

//---------for testing---------
int main(void)
{
	char	**map;
	int		mat_info[2] = {8, 10};

	map = ft_create_matrix_char(mat_info[0], mat_info[1]);
	if (!map)
		return (-1);
	for(int i = 0; i < mat_info[0]; i++)
	{
		for(int j = 0; j < mat_info[1]; j++)
	 		map[i][j] = '.';
	}
	map[3][3] = 'o';
	map[0][2] = 'o';
	map[3][0] = 'o';
	map[6][5] = 'o';
	int **res;
	res = ft_process_map((char **)map, 'o', mat_info); 
	if(!res)
		return (-1);
	printf("---------input---------\n");
	for(int i = 0; i < mat_info[0]; i++)
	{
		for(int j = 0; j < mat_info[1]; j++)
			printf("%c ", map[i][j]);
		printf("\n");
	}	
	printf("\n---------output--------\n");
	for(int i = 0; i < mat_info[0]; i++)
	{
		for(int j = 0; j < mat_info[1]; j++)
			printf("%d ", res[i][j]);
		printf("\n");
	}
	free(map);
	free(res);
}
//-----------------------------