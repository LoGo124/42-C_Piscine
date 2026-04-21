/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 12:59:13 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/23 12:21:11 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	base_len;
	int	nbr;
	int	sign;

	i = -1;
	base_len = check_base(base);
	nbr = 0;
	sign = 1;
	if (base_len < 2)
		return (0);
	while ((*str >= 9 && *str <= 12) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (get_value(str[++i], base) != -1)
	{
		nbr *= base_len;
		nbr += get_value(str[i], base);
	}
	return (nbr * sign);
}
/*
int main(void)
{
    printf("%d", ft_atoi_base("--------++++++-----123asd asdi", "0123456789"));
}
*/
