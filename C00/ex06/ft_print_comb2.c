/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:28:06 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/04 14:23:15 by ilopez-g         ###   ########.fr       */
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
