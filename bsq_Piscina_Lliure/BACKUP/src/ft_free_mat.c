/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecrodri <hecrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:10:48 by hecrodri          #+#    #+#             */
/*   Updated: 2022/08/30 16:20:59 by hecrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

// Libera las filas reservadas y la array que las contiene
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

//equivalente a ft_free_int pero con int
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
