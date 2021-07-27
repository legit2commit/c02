int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}	
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	l[5] = "abcd\0";
	char	U[5] = "ABCD\0";

	printf("%d", ft_str_is_lowercase(l));
	printf("%d", ft_str_is_lowercase(U));
	return (0);
}
*/
