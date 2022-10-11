/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 07:33:55 by abarja-p          #+#    #+#             */
/*   Updated: 2022/08/31 01:19:27 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

// ----------------- structs ---------------
typedef struct box {
	int	row;
	int	col;
	int	size;
}	t_box;

typedef struct misc {
	char	*condition;
	char	*buff;
	char	*path;
	char	*max;
	char	**map;
	int		**sqr;
	int		size;
}	t_misc;

// ----------------- utils ---------------
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_print_error(int i);
int		ft_atoi(char *str);

// ----------------- error_management ---------------
int		ft_check_chars(char *str, char *cond);
int		ft_check_height(char *str, int nb_row);
int		ft_check_width(char *str, int size);
int		ft_first_line_mat(char *str);

// ----------------- main program ---------------
int		init_program(int ac, char **av);
int		engine(int ac, char **av, int filedest, t_misc misc);
char	*map_manager(char *path, int filedest, char *condition);
char	*ft_read_file(char *path);

// ----------------- map process ---------------
char	*ft_cut_head(char *buff);
char	*ft_cut_body(char *buff);
int		ft_check_map(char *str, char *cond, int nb_row);

#endif
