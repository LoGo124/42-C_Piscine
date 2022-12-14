/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:31:15 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/08/16 08:26:21 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int a)
{
	char	res;

	res = '0';
	if (a == -2147483648)
		write(1, "-2147483648", 11);
	else if (a < 0)
	{
		a *= -1;
		write(1, "-", 1);
		ft_putnbr(a / 10);
		res = (a % 10) + 48;
		write(1, &res, 1);
	}
	else if (a < 10)
	{
		res += a;
		write(1, &res, 1);
	}
	else
	{
		ft_putnbr(a / 10);
		res = (a % 10) + 48;
		write(1, &res, 1);
	}
}
