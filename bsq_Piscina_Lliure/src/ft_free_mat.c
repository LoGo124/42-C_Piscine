/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:10:48 by hecrodri          #+#    #+#             */
/*   Updated: 2022/08/30 19:21:03 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

void	ft_free_char(char **matrix, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(matrix[i]);
		j++;
	}
	free(matrix);
}

void	ft_free_int(int **matrix, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(matrix[i]);
		j++;
	}
	free(matrix);
}
