/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:31:16 by rruiz-sa          #+#    #+#             */
/*   Updated: 2022/08/30 18:28:16 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Return the position of the first new line (\n)
int	ft_len_first_line(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

//Return a clean str without first line
char *ft_str_array(char *str, int opt)
{
	char	*str_minus_first_line;
	int		i;
	int		cont;
		
	cont = ft_len_first_line(str);
	i = -1;
	str_minus_first_line = (char *) malloc ((ft_strlen(str) - cont) * (sizeof(char *))); //comprobar
		if(!str_minus_first_line)
			{
				free(str_minus_first_line);
				return (0);
			}
	while (str[i++] = '\0')
		str_minus_first_line[i] = str[cont + i];
	str[i + 1] = '\0'; //Comprobar
	return (str_minus_first_line);
}

char *ft_conditions(char *filename, int opt, char *cond, int *header_num)
{
	int len_fl;

	len_fl = ft_
/*	char conditions[3];
	int cont;
	char *first_line;
	cont = 0;
	while (str[cont] != '\n')
	{
		first_line[cont] = filename[cont];
	}
	if (ft_strlen(firstline) !='0')
	{
		write(1, "map error\n", 9);
		return (NULL);
	}
	*headernum = first_line[0];
	cond[0] = first_line[1];
	cond[1] = first_line[2];
	cond[2] = first_line[3];*/
//	return ????
}
char	*ft_read_entry(char *filename, int opt, char *cond, int *header_num); return (buff)
{
​
}
int	my_size_bytes(char *path)
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
char *my_read_file(char *path)
{
    char *buff = NULL;
    int size = my_size_bytes(path);
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
Contraer














Enviar un mensaje a ft_reader_algo








