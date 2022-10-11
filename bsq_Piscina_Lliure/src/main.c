/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:41:33 by mferri-m          #+#    #+#             */
/*   Updated: 2022/08/31 01:45:01 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

int	main(int ac, char **av)
{
	if (init_program(ac, av) == 84)
		return (84);
	else
		return (0);
}

int	init_program(int ac, char **av)
{
	int		filedest;
	int		size;
	t_misc	misc;

	if (ac == 1)
		filedest = 0;
	else
		filedest = 1;
	engine(ac, av, filedest, misc);
	return (0);
}

int	engine(int ac, char **av, int filedest, t_misc misc)
{
	int	i;

    i = 1;
	misc.path = av[1];
    while (av[i++] != NULL)
    {
        if (map_manager(misc.path, filedest, misc.condition) == NULL)
            ft_print_error(5);
        // else
        //     // map = ft_str_to_map(buff);
        //     // if (map)
        //     //     sqr = ft_process_map(map, condition);
        //     // else
        //     //     return (84);
        //     if (sqr)
        //         max = ft_max_mat(sqr);
        //     else
        //         return (84);
        //     print_sol(map, max);
    }
	return (0);
}

char	*map_manager(char *path, int filedest, char *condition)
{
	char	*buff;

	buff = ft_read_file(path);
	if (!buff)
		return (NULL);
    condition = ft_cut_head(buff);
	if (condition == NULL)
		return (NULL);
    buff = ft_cut_body(buff);
	if (!buff)
		return (NULL);
	// if(ft_check_map(buff) == 1)
	//     return (NULL);
	return (buff);
}
























int	ft_size_bytes(char *path)
{
    int size;
    char *buff;
    int fd;
    fd = open(path, O_RDONLY);
    size = 0;
    buff = malloc(2 * sizeof(char));
    if (buff == 0)
        return -1;
    while (read(fd, buff, 1) == 1)
        size++;
    free(buff);
    close(fd);
    return (size);
}

char *ft_read_file(char *path)
{
    char *buff = NULL;
    int size = ft_size_bytes(path);
    int fd = open(path, O_RDONLY);
    if (fd == -1)
        return (NULL);
    buff = malloc((size + 1) * sizeof(char));
    if (!buff)
        return (NULL);
    if (read(fd, buff, size) == -1)
        return (NULL);
    buff[size] = '\0';
    close(fd);
    return (buff);
}
