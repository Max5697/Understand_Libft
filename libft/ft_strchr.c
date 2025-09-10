#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	while(*s != '\0' && c != *s)
	{
		s++;
	}
	if(c == *s)
	{
		return((char *)s);
	}
	return(0);
}

int	main()
{
	char str[] = "this is a sample string";
	char *pch;
	pch = strchr(str,'s');
	while(pch != NULL)
	{
		printf("Found at %d\n",pch-str+1);
		pch = strchr(pch + 1, 's');
	}
}
