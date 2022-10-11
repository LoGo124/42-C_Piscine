# incluir header de cada grupo
# cuidado con les .h
# define compilador
CC              =   gcc
# define el nombre del ejecutable
NAME            =   bsq
# define las flags del compilador
FLAGS           =   -Wall -Werror -Wextra
# define ruta de archivo de srcs
SRC             =   main.c                             \
                    src/ft_putchar.c                   \
                    src/ft_print_alphabet.c            \
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