/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_basic_mat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecrodri <hecrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:33:52 by hecrodri          #+#    #+#             */
/*   Updated: 2022/08/30 16:34:07 by hecrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	**ft_create_matrix_char(int row, int col);

int		**ft_create_matrix_int(int row, int col);

int		*ft_max_mat(int **sqr, int row, int col);

int	main(int argc, char **argv)
{
	char	**matrix;
	int		**test_matrix;

	if (argc != 3)
		return (1);
	matrix = ft_create_matrix_char(atoi(argv[1]), atoi(argv[2]));
	if (!matrix)
		printf("handled error\n");
	else
	{
		matrix[atoi(argv[1]) - 1][atoi(argv[2]) - 1] = '1';
		printf("%c\n", matrix[atoi(argv[1]) - 1][atoi(argv[2]) - 1]);
	}
	test_matrix = malloc(2 * sizeof(int));
	test_matrix[0] = malloc(2 * sizeof(int));
	test_matrix[1] = malloc(2 * sizeof(int));
	test_matrix[0][0] = 1;
	test_matrix[0][1] = 4;
	test_matrix[1][0] = 2;
	test_matrix[1][1] = -1;
	printf("%d ", ft_max_mat(test_matrix, 2, 2)[0]);
	printf("%d ", ft_max_mat(test_matrix, 2, 2)[1]);
	printf("%d\n", ft_max_mat(test_matrix, 2, 2)[2]);
	return (0);
}
