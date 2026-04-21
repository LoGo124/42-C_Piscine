/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 02:23:24 by esasal-i          #+#    #+#             */
/*   Updated: 2026/03/15 13:23:40 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_basic_matrix_preparation(char (*dst)[6][6], char *str, int dim);
void	print_matrix(char matrix[6][6], int dev);
char	**create_matrix(int max_rows, int max_cols);
void	print_matrix_ptr(char **matrix, int rows, int cols, int dev);
void	set_row(char *row, char *params, int group, int dimension);
void	set_col(char **matrix, char *params, int group, int dimension);
void	set_board_with_params(char **matrix, int dimension);

//divide 8 since we count that every number will have a space
int	main(int argc, char *argv[])
{
	char	*str;
	char	**test;
	int		n;
	int		size;

	size = 1;
	if (argc == 2)
	{
		str = argv[1];
		while (str[size - 1] != '\0')
			size++;
		if (0 == size % 8)
		{
			size /= 8;
			test = create_matrix(6, 6);
			set_row(test[0], str, 0, size);
			set_row(test[5], str, 1, size);
			set_col(test, str, 2, size);
			set_col(test, str, 3, size);
			set_board_with_params(test, 6);
			return (0);
		}
	}
	write(1, "Error\n", 6);
	return (-1);
}
