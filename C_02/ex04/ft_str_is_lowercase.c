/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:32:12 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/08/27 10:32:16 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] < 'a' || str[count] > 'z')
			return (0);
		count++;
	}
	return (1);
}
/*
int		main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_alp;
	p_alp = alpha;

	char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only lower chars\n0 =
	 String doesn't contain only lower chars\n\n");
	printf("%s = %d\n", alpha, ft_str_is_lowercase(p_alp));
	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_lowercase(p_emp));

	return (0);
}
*/