#include <stdio.h>

int	ft_check_chars(char *str, char *cond)
{
    int i;
    char j;
    char c_void;
    char c_obs;
    if(cond[3])
        return 0;
    c_void = cond[0];
    c_obs = cond[1];
	i = 0;
    j = 0;
    if (cond[0] == cond [1] || cond[0] == cond[2] || cond[1] == cond[2]) //Check 1. Si son caracteres iguales, return 0
            return (0);
    while (cond[j])
    {     if (cond[j] < ' ' || cond[j] > '~') //Check 2. Si son caracteres no imprimibles, devuelve 0
            return (0);
            j++;
    }
    while (str[i]) // Check 3. Comprueba que la matriz solo tiene los caracteres de *cond
	{
		if (str[i] != c_void && str[i] != c_obs && str[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char *str = "...a..\n.....\n....\n";
    char *cond = ".ox";
    printf("%d\n", ft_check_chars(str, cond));
}*/
