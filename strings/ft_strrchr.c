#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = strlen(s);
	while(i >= 0)
	{
		if(s[i] == (char)c)
			return((char *)s + i);
		i--;
	}
	return (0);
}

int	main()
{
	char str[] = "Hello";
	char *p = ft_strrchr(str, 'o');
	*p = 'z';
	printf("%s",str);
}
