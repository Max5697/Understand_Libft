#include <stdio.h>

void	ft_memchr(const char *str,int c, size_t num)
{
	size_t i;
	unsigned char *str_c;

	i = 0;
	str_c = (unsigned char *)str;
	while(i < n)
	{
		if(str_c[i] == (unsigned char)c)
		{
			return(s + i);
		}
		i++;
	}
	return(NULL);
}
