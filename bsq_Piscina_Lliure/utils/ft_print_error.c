/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:44:02 by mferri-m          #+#    #+#             */
/*   Updated: 2022/08/31 00:55:39 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

void	ft_print_error(int error)
{
    if (error == 1)
        ft_putstr("Malloc error\n");
    if (error == 2)
        ft_putstr("Open error\n");
    if (error == 3)
        ft_putstr("Close error\n");
    if (error == 4)
        ft_putstr("Free error\n");
    if (error == 5)
        ft_putstr("map error\n");
}