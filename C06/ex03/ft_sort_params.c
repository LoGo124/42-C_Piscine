/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 21:27:47 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/03/25 17:14:19 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_putstrs(char **strs)
{
	int	i;
	int	j;

	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			write(1, &strs[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	char	**sorted_argv;
	int		i;

	sorted_argv = &argv[1];
	if (argc > 1)
	{
		i = 0;
		while (i < argc - 2)
		{
			if (ft_strcmp(sorted_argv[i], sorted_argv[i + 1]) > 0)
			{
				temp = sorted_argv[i];
				sorted_argv[i] = sorted_argv[i + 1];
				sorted_argv[i + 1] = temp;
				i = 0;
			}
			else
				i++;
		}
		ft_putstrs(sorted_argv);
	}
	return (0);
}
