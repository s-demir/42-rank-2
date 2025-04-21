
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;

	char **tab = (char*)malloc(sizeof(char *) * 1000);
	if (!tab)
		return NULL;

	while (str[i] <= 32)
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] > 32)
		{
			k = 0;
			tab[j] = (char*)malloc(sizeof(char) * 1000);
			while (str[i] > 32)
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 1;
		char **words = ft_split(av[1]);
		while (words[i])
		{
			ft_putstr(words[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putsr(words[0]);
	}
	write(1, "\n", 1);
}