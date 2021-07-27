char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	new[5] = "abcd\0";
	char	old[]= "dcba";
	
	ft_strcpy(old, new);
	printf("%s", old);
	return (0);
}
*/
