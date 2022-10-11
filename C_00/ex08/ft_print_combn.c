/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:31:58 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/08/24 12:32:03 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_n(int nums[], int n)
{
	int		a;
	char	printable;

	a = -1;
	while (++a < n)
	{
		printable = nums[a] + 48;
		write(1, &printable, 1);
	}
	if (nums[n - 1] != 9 || nums[0] != 10 - n)
		write(1, ", ", 2);
}

void	recurs(int d, int nums[], int count, int n)
{
	int	tmp;

	tmp = count;
	count++;
	while (tmp < 10)
	{
		nums[d] = tmp;
		if (d < n - 1)
			recurs((d + 1), nums, count, n);
		else
			print_n(nums, n);
		tmp++;
		count++;
	}
}

void	ft_print_combn(int n)
{
	int	count;
	int	d;
	int	nums[9];

	d = 0;
	count = 0;
	if (n > 0 && n < 10)
		recurs(d, nums, count, n);
}
