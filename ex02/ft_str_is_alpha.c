int	ft_str_is_alpha(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
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
	char	str[14]="asdkhhadsfjkh\0";
	char	ano[10]= "asdfasdf!\0";
	
	printf("%d",ft_str_is_alpha(str));
	printf("%d",ft_str_is_alpha(ano));
	return (0);
}
*/
