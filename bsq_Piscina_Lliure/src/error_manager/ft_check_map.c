/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:21:58 by mferri-m          #+#    #+#             */
/*   Updated: 2022/08/30 19:50:03 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/bsq.h"

int	ft_check_map(char *str, char *cond, int nb_row)
{
	if (ft_check_chars(str, cond) && ft_check_height(str, nb_row) \
			&& ft_check_width(str, ft_first_line_mat(str)))
		return (1);
	else
		return (0);
}
