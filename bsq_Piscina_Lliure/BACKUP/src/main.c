/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:23:42 by alajara-          #+#    #+#             */
/*   Updated: 2022/08/30 19:07:52 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int main(int ac, char **argv)
{
	int		opt;
	char	*buff;
	char	**map;
	int		**sqr;
	int		size;
	char	*max;
	??	mat_info;									// Que es mat_info?

	if (ac == 1)
		opt = 0;
	else
		opt = 1;
	buff = ft_read_entry(namefile, opt, cond, &header_num);									// hacer while if (ac > 2)
	buff = ft_process_first_line(file, opt);		// ft_read_entry.c
	size = ft_check_map(buff);						// 
	if (size < 1)
		ft_error();									// main.c
	else
		map = ft_str_to_map(buff);					// ft_process_str.c
	sqr = ft_process_map(map, cond, mat_info);		// ft_process_map.c	// de donde viene mat_info?	// cuando recibimos cond?
	max = ft_max_mat(sqr);							// ft_basic_mat.c
	print_sol(map, max);							//

	return ;
}
