#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	int	i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)ptr;
	while(i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return(ptr);
}


int main()
{
	char a[] = "xxxxxx";
	ft_memset(a, '1', 3);
	printf("%s", a);
}
