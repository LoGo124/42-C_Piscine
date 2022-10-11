/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:33:08 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/09/01 13:26:31 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	cap;

	count = 0;
	cap = 1;
	while (str[count])
	{
		if (cap == 1 && (str[count] >= 'a' && str[count] <= 'z'))
		{
			str[count] -= 'a' - 'A';
			cap--;
		}
		else if (cap < 1 && (str[count] >= 'A' && str[count] <= 'Z'))
			str[count] += 'a' - 'A';
		else if ((str[count] < '0') || (str[count] > '9' && str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a') || (str[count] > 'z'))
			cap = 1;
		else
			cap--;
		count++;
	}
	return (str);
}
/*
int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}
*/
