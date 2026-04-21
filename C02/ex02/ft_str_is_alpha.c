/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 21:27:29 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/12 21:35:04 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if ((str[count] < 'A' || str[count] > 'z')
			|| (str[count] > 'Z' && str[count] < 'a'))
			return (0);
		count++;
	}
	return (1);
}
/*
int		main(void)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *p_alp;
	p_alp = alpha;

	char special[]="áéíóú àèìòù âêîôû äëïöü \'\"
		(){}[]!?@#$&* wxyz WXYZ";
	char *p_spe;
	p_spe = special;
	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only alphabetical chars\n0 =
	 String doesn't contain only alphabetical chars\n\n");
	printf("%s = %d\n", alpha, ft_str_is_alpha(p_alp));
	printf("%s = %d\n", special, ft_str_is_alpha(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_alpha(p_emp));

	return (0);
}
*/
