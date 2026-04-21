/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 21:30:21 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/14 18:45:26 by ilopez-g         ###   ########.fr       */
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
			str[count] -= 32;
			cap--;
		}
		else if (cap < 1 && (str[count] >= 'A' && str[count] <= 'Z'))
			str[count] += 32;
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
	char str1[] = "salut, comment tu vas ? 42mtsqarante-deux;cinquante+et+un";
	
	char str2[] = " sALuT, ComMenTtuVAS ?42MotsQUarante-deUX;cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}
*/
