/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:28:22 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/23 11:27:31 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	res;

	res = '0';
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb / 10)
			ft_putnbr(-(nb / 10));
		res += -(nb % 10);
		write(1, &res, 1);
	}
	else if (nb < 10)
	{
		res += nb;
		write(1, &res, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		res += (nb % 10);
		write(1, &res, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(-9);
}
*/
