char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	 
	while (str[i] !='\0')
	{	if (str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
		++i;
		else if ((str[i--] < '0' && str[i--] >'9') || (str[i--] < 'A' || str[i--] > 'Z' && str[i--] < 'a' || str[i--] > 'z') && (str[i] >= 'a' && str[i] <= 'z'))
		{	str[i] = str[i] - 32;
			i++;
		}
		else if ((str[i--] >= 'A' && str[i--] <= 'Z' || str[i--] >= 'a' && str[i--] <= 'z') && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] +32;
			i++;
		}
	}
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char	str[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}

