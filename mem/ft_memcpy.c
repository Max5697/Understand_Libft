#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char dst_c;
	unsigned char src_c;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		dst_c[i] = src_c[i];
		i++;
	}
	return(dst_c);
}
