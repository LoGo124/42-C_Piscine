#include <stdio.h>
#include <unistd.h>

int ft_first_line_mat(char *str)
{
	int	columns;

	columns = 0;
	while (str[columns] != '\n')
		columns++;

	return (columns);
}

int	ft_check_width(char *str, int size)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while(str[i])
	{
		while(str[i] != '\n')
		{
			j++;
			i++;
		}
		if (j != size)
			return(0);
	j = 0;
	i++;
	}
	return(1);
}

/*int main(void)
{
	char str[] = "Hola\nHola\nHolsa\nHola\n";
	int d;

	d = check_matrix_width(str, ft_first_line_mat(str));
	printf("%d", d);
}*/
