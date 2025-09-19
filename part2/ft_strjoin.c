#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	if(!s1 || !s2)
		return(NULL);
	nstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!nstr)
		return(NULL);
	while(s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	while(s2[i])
	{
		nstr[j] = s2[j];
		j++;
	}
	nstr[j] = '\0';
	return(nstr);
}
