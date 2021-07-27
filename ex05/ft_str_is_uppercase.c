int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	test1[5] = "ABCD\0";
	char	test2[5] = "ab!%\0";

	printf("%d, %d", ft_str_is_uppercase(test1), ft_str_is_uppercase(test2));
	return (0);
}
*/
