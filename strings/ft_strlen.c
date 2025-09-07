#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

int	main()
{
	char a[] = "abcdefghijklmnou";
	int b = strlen(a);
	printf("Original strlen: %u\n",b);
	int c = ft_strlen(a);
	printf("Copy strlen: %u\n", c);
}
