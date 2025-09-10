#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)s;
	while(i < n)
	{
		p[i] = '\0';
		i++;
	}
}

int	main()
{
	char a[] = "XXXXXX";
	ft_bzero(a, 1);
	printf("ft_bezeo: %s\n", a);
	printf("cheack array: %d\n", a[3]);
}
