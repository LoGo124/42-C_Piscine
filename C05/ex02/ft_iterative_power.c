/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 18:57:37 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/25 09:21:41 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0 || nb == 1)
		return (1);
	while (--power)
		res *= nb;
	return (res);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
*/
