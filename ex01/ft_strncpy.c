char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	testsrc[5] = "test\0";
	char	testdest[9] = "testfail\0";

	ft_strncpy(testdest, testsrc, 8);
	printf("%s", testdest);
	return (0);
}
*/
