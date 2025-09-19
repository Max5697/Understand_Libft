//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char	*ft_strmapi(const char *s, char(*f)(unsigned int, char))
{
	unsigned int	i;
	char	*nstr;

	i = 0;
	if(!s)
		return(NULL);
	nstr = malloc(strlen(s) + 1);
	if(!nstr)
		return(NULL);
	while(i < strlen(s))
	{
		nstr[i] = (*f)(i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return(nstr);
}
char	test_fn(unsigned int index, char c)
{
	if(index % 2 == 0)
		return c - 32;
	else
		return c;
}
int	main()
{
	char str[] = "ababaaba";
	char *re = ft_strmapi(str, test_fn);
	printf("%s", re);
}
