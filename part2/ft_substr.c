#include <stdio.h>
#include <string.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*a_s;

	i = 0;
	if(s == NULL)
		return(NULL);
	if(start > strlen(s))
		return(strdup(""));
	if(len > strlen(s + start))
		len = strlen(s + start);
	a_s = (char *)malloc(len + 1);
	if(a_s == NULL)
		return(NULL);
	while(i < len)
	{
		a_s[i] = s[start + i];
		i++;
	}
	a_s[i] = "\0";

	return(a_s);
}
