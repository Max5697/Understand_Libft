#include "libft.h"

size_t	*ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if(size <= ft_strlen(dst))
		return(size + ft_strlen(src));
	while(src[i] != '\0' && dst_len + 1 < size)
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return(ft_strlen(dst) + ft_strlen(&src[i]));
}
