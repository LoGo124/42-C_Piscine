//#include "bsq.h"
#include <stdio.h>

int ft_check_chars(char *str, char *cond);
int	ft_check_height(char *str, int nb_row);
int	ft_check_width(char *str, int size);
int ft_first_line_mat(char *str);

int ft_check_map(char *str, char *cond, int nb_row)
{
    if (ft_check_chars(str, cond) && ft_check_height(str, nb_row) 
    && ft_check_width(str, ft_first_line_mat(str)))
        return (1);
    else
        return (0);
}

int main(void)
{
    //ft_check_width
    //char *str = ".....\n......\nooooo\n"; //Fila con diferente anchura

    //ft_check_height
    //char *str = ".....\n.....\nooooo\n....."; //Matriz sin salto de linea al final
    //char *str = ".....\n.....\nooooo\n.....\n"; //Matriz con diferente altura al int de entrada
    //char *str = "";

    //ft_check_chars
    char *str = ".....\n.....\n.....\n"; //Caracter incorrecto
    //char *cond = "..x"; //Dos caracteres iguales
    //char *cond = ".\tx"; //Caracter no imprimible
    
    //BIEN
    //char *str = ".....\n.....\nooooo\n";
    char *cond = ".ox";
    //int d;
    //d = ft_check_chars(str, cond);
    //d = check_matrix_width(str, ft_first_line_mat(str));
    printf("%d\n", ft_check_map(str, cond, 3));
    //printf("%d", d);
}