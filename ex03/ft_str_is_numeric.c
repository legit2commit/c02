int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
	char	str[10] = "123456789\0";
	char	ano[6] = "%^&!!\0";

	printf("%d", ft_str_is_numeric(str));
	printf("%d", ft_str_is_numeric(ano));
	return (0);
}
*/
