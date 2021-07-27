int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	test1[5] = "abcd";
	char	test2[2] = "\b\0";

	printf("%d, %d", ft_str_is_printable(test1), ft_str_is_printable(test2));
	return (0);
}
*/
