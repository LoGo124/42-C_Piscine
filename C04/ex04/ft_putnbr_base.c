/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 10:57:43 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/23 11:25:06 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	check_base(char *str)
{
	int	c;
	int	i;

	c = 0;
	while (str[c])
	{
		if (str[c] == '+' || str[c] == '-')
			return (0);
		i = c + 1;
		while (str[i])
		{
			if (str[c] == str[i])
				return (0);
			i++;
		}
		c++;
	}
	return (c);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		c;

	c = check_base(base);
	if (!c || c == 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (-(nbr / c))
			ft_putnbr_base(-(nbr / c), base);
		write(1, &base[-(nbr % c)], 1);
	}
	else if (nbr < c)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr_base(nbr / c, base);
		write(1, &base[nbr % c], 1);
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
*/
