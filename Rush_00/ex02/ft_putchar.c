/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprieto- <jprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:14:02 by jprieto-          #+#    #+#             */
/*   Updated: 2022/08/13 17:30:52 by jprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int y, int x)
{
	char	c;

	if ((j == x && i == 1) || (j == 1 && i == 1))
	{
		c = 'A';
	}
	else if ((j == 1 && i == y) || (j == x && i == y))
	{
		c = 'C';
	}
	else if (j > 1 && j < x && (i == y || i == 1))
	{
		c = 'B';
	}
	else if (i > 1 && i < y && (j == x || j == 1))
	{
		c = 'B';
	}
	else
	{
		c = ' ';
	}
	write(1, &c, 1);
}
