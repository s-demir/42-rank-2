#include <stdlib.h>

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k;

	char **tab = (char **)malloc(sizeof(char *) * 1000);
	if (!tab)
	{
		return(NULL);
	}
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] > 32)
		{
			k = 0;
			tab[j] = (char *)malloc(sizeof(char) * 1000);
			if (!tab[j])
			{
				return (NULL);
			}
			while (str[i] > 32)
			{
				tab[j][k] = str[i];
				k++;
				i++;
			}
			tab[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return(tab);
}