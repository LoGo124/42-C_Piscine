/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:43:16 by bimartin          #+#    #+#             */
/*   Updated: 2022/08/30 18:45:12 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "bsq.h"

int ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}

int ft_check_row(char **map, char *cond, int *pos)
{
	int	num;
	int	len;

	num = 0;
	len = ft_strlen(map[pos[0]]) - 1;
	while ((map[pos[0] + num][pos[1]] != cond[1]) && num < len)
		num++;
	return (num);
}

//afegit parametre max
int ft_check_col(char **map, char *cond, int *pos, int max)
{
	int	num;
	int	len;

	num = 0;
	len = ft_strlen(map[pos[0]]) - 1;
	while ((map[pos[0]][pos[1] + num] != cond[1]) && num < max)
		num++;
	return (num);
}

int ft_check_square(char **map, char *cond, int mat_info)
{
	int	cont;
	int *new_pos;
	int num;
	int num_row;

	num = ft_strlen(map[0]) - 1;
	new_pos = pos;
	cont = 0;
	num_row = ft_check_row(map, cond, pos);
	while (cont < num_row)
	{
		if (ft_check_col(map, cond, new_pos, num_row) < num)
			num = ft_check_col(map, cond, new_pos, num_row);
		new_pos[0]++;
	}
}

int **ft_process_map(char **map, char *cond, int *pos)
{
	int	i;
	int j;
	int **map_num;
	int	map_len;

	map_len = ft_get_map_length(map);
	j = 0;
	while (j < ft_strlen(map[0]))
	{
		i = 0;
		while (i < ft_strlen(map[0]))
		{
			map[j][i] = ft_check_square(map, cond, pos, map_len) - 48;
			i++;
		}
		j++;
	}
}

int	main(void)
{
	char **map[4][4] = {
		{"...o"},
	   	{"...."},
	   	{"...."},
	   	{"...."}
	};
	int **map_num;
	int	i, j;

	map_num = ft_process_map(map, "o", );
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			printf("%d ", map_num[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

/*

[. . . o]
[. . . .]
[. . . .]
[. . . .]
​
[2 1 0]
[1 1 0]
[0 1 1]
​
*/