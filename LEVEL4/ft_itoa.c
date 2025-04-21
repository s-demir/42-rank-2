#include <stdlib.h>
int num_len(int nbr)
{
	int len = 0;
	if(nbr == 0)
		return 1;
	if(nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr != 0)
	{
		nbr= nbr / 10;
		len++;
	}
	return len;
}


char	*ft_itoa(int nbr)
{
	int i = 0;
	int len = num_len(nbr);

	char *new= malloc((sizeof(char) * len) + 1);
	if (!new)
		return NULL;

	new[len] = '\0';
	if (nbr == 0)
	{
		new[0] = '0';
		return (new);
	}
	if (nbr < 0)
	{
		new[0] = '-';
		nbr = -nbr;
	}
	while (len > 0 && nbr != 0)
	{
		len--;
		new[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (new);
}