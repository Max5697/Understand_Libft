#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
// test strcpy
/*char *ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}*/

/*char *ft_strncpy(char *dst, const char *src, size_t num)
{
	size_t i;
	//size_t j;

	i = 0;
	//j = num;

	while(i != num && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		num--;
	}
	while(num != 0)
	{
		dst[i] = '\0';
		i++;
		num--;
	}
	return(dst);
}*/
/*
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	if(size == 0)
	{
		return(i);
	}
	while(src[j] != '\0' && j < size - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
*/
int	main()
{
	char src[] = "";
	char dst[10];
	size_t a = ft_strlcpy(dst, src, 4);
	printf("dst:%s src:%s\n",dst, src);
	printf("len: %zu",a);
	//printf("dst: %u\n",src);
	//printf("src: %u\n",dst);
}
