# incluir header de cada grupo
# cuidado con les .h
# define compilador

CC              =   gcc
# define el nombre del ejecutable
NAME            =   bsq

# define las flags del compilador
FLAGS           =   -Wall -Werror -Wextra

# define ruta de archivo de srcs
SRC				=	src/main.c	\
					src/error_manager/ft_check_chars.c	\
					src/error_manager/ft_check_height.c	\
					src/error_manager/ft_check_width.c	\
					src/error_manager/ft_check_map.c	\
					src/ft_basic_mat.c	\
					src/ft_free_mat.c	\
					src/ft_cut_head.c	\
					utils/ft_putchar.c	\
					utils/ft_strlen.c	\
					utils/ft_putstr.c	\
					utils/ft_print_error.c	\

# define los archivos objecto
OBJS            =   $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
				$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
				rm -f $(OBJS)

fclean: clean
				rm -f $(NAME)

re:             fclean all

.PHONY:         all clean fclean re