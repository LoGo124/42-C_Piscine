/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:50:23 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/15 13:16:54 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Cuenta el numero de caracteres
int	ft_len(char str[])
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// Calcula la dimension de la matriz devolviendo n donde
// n*n es el tamaño de la matriz.
int	ft_find_n(char *str)
{
	int	len;

	len = ft_len(str);
	if ((len + 1) % 8 != 0)
		return (0);
	return ((len + 1) / 8);
}

// Combierte la string del parametro en una lista de numeros
// y devuelve una lista que empieza con -1 en caso de haber errores.
int	*ft_get_number(char *str, int n)
{
	while (*str != '\0')
	{
	}
}

// Combierte la lista de enteros en una matriz (n+2)*(n+2),
// con -2 en las esquinas, los valores de la lista introducida,
// en los laterales y 0 en el interior.
int	**ft_input(int *list_nbrs, int n)
{
	int	**matrix;
}
