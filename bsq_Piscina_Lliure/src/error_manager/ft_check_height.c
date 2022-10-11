/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_height.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:21:48 by mferri-m          #+#    #+#             */
/*   Updated: 2022/08/30 19:48:45 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/bsq.h"

int	ft_check_height(char *str, int nb_row)
{
	int	count;
	int	rows;

	count = 0;
	rows = 0;
	while (str[count])
	{
		if (str[count] == '\n')
			rows++;
	count++;
	}
	if (rows > 0 && rows == nb_row)
		return (1);
	else
		return (0);
}
