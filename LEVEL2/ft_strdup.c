#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	int j = 0;

	while (src[i])
		i++;
	char *str = malloc((sizeof(char) * i) + 1);
	if (!str)
		return (NULL);
	while (src[j])
	{
		str[j] = src[j];
		j++;
	}
	return (str);
}