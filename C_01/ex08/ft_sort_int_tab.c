/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:55:04 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/08/18 19:55:17 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;

	count = 0;
	while (count < size -1)
	{
		count++;
		if (tab[count] < tab[count - 1])
		{
			ft_swap(&tab[count], &tab[count - 1]);
			count = 0;
		}
	}
}
