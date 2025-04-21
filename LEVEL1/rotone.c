#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 2)
	{
		char *str = av[1];
		int i = 0;
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			{
				str[i] = str[i] + 1;
			}
			else if (str[i] == 'z' || str[i] == 'Z')
			{
				str[i] = str[i] - 25;
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}