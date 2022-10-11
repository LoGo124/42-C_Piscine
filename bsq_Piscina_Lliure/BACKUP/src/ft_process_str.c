/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 07:43:18 by abarja-p          #+#    #+#             */
/*   Updated: 2022/08/30 18:15:24 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_bsq.h"
#include <stdio.h>
#include <stdlib.h>

/*char	*quit_first_line(char *str)
{
	int	i;
​
	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (&str[i + 1]);
}*/
char	**ft_str_to_map(char *str, int row, int col)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	//str = quit_first_line(str);
	i = 0;
	k = -1;
	tab = (char **) malloc (row * (sizeof(char *)));
	while (i < row)
	{
		j = 0;
		tab[i] = (char *) malloc (col * (sizeof(char)));
		k += 1;
		while (j < col)
		{
			tab[i][j] = str[k];
			j++;
			k++;
		}
		i++;
	}
	return (tab);
}

/*int	main(int argc, char **argv)
{
	char	**ptr;
	int		i;
​
	i = 0;
	ptr = ft_str_to_map("dsaddsada\n32183812378219738921813278391271891", 5, 5);
	//(void) argc;
	while (i < 5)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	return (0);
}*/