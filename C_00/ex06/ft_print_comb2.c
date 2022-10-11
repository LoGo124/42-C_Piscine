/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 08:20:19 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/08/16 08:22:44 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_ints(int a, int b)
{
	char	char_a;
	char	char_b;
	char	char_c;
	char	char_d;

	if (!(a == 0 && b == 1))
		write(1, ", ", 2);
	char_a = a / 10 + 48;
	char_b = a % 10 + 48;
	char_c = b / 10 + 48;
	char_d = b % 10 + 48;
	write(1, &char_a, 1);
	write(1, &char_b, 1);
	write(1, " ", 1);
	write(1, &char_c, 1);
	write(1, &char_d, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_print_ints(a, b);
			b++;
		}
		a++;
	}
}
