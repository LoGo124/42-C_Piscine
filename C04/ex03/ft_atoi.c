/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:31:50 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/21 13:32:48 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int		c;
	int		nbr;
	int		sign;

	c = 0;
	nbr = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 12) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		nbr *= 10;
		nbr += str[c] - '0';
		c++;
	}
	return (nbr * sign);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("--------++++++-----123asd asd"));
}
*/
