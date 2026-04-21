/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusman-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:24:59 by iusman-k          #+#    #+#             */
/*   Updated: 2026/03/14 19:34:03 by iusman-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int output(int **arr) /** because it's a matrix */
{
	int	row; /* numero de valor en la fila */
	int	col; /* numero de columna */
	int	i;

	/*Array size : 16 */
	/*Get array to iterate over values in sync with row jumps*/

	row = 1;
	col = 1;
	i = 0;
	while(col < 5)
	{
		while(row<5)
		{
			write(1, &arr[i], 1);
			if(col<4)
			{
				write(1, " ", 1);
				i++;
			}
			else
			{
				write(1, "\n", 1);
			}
			row++;
		}
	col++;
	}
	return (0);
}

int	main(void)
{
	int	arr[15];

	arr = {1, 2, 3, 4, 1, 2, 2, 2, 1, 2, 3, 4, 1, 2, 2, 2};
	output(&arr);
	return (0);
}
