/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:54:52 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/08/27 15:01:09 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;
	int	aux[100000];

	c = size - 1;
	index = 0;
	while (c >= 0)
	{
		aux[c] = tab[index];
		index++;
		c--;
	}
	c = 0;
	while (c < size)
	{
		tab[c] = aux[c];
		c++;
	}
}
