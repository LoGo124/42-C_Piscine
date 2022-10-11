/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:32:32 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/08/27 10:32:35 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] < ' ' || str[count] == 127)
			return (0);
		count++;
	}
	return (1);
}
/*
int		main(void)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_alp;
	p_alp = alpha;

	char special[] = "	A ";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only upper chars\n0 =
	 String doesn't contain only u pper chars\n\n");
	printf("%s = %d\n", alpha, ft_str_is_printable(p_alp));
	printf("%s = %d\n", special, ft_str_is_printable(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_printable(p_emp));

	return (0);
}
*/