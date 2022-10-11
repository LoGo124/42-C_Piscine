int	ft_check_height(char *str, int nb_row)
{
	int count;
	int	rows;

	count = 0;
	rows = 0;

	while (str[count])
	{
		if (str[count] == '\n')
			rows++;

	count++;
	}
	if (rows > 0 && rows == nb_row)
		return (1);
	else
		return(0);
}
