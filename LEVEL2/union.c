#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int k = 0;
	unsigned char seen[256] = {0};
	if (ac == 3)
	{
		while (av[1][i])
		{
			if(seen[(unsigned char)av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				seen[(unsigned char) av[1][i]] = 1;
			}
			i++;
		}
		while (av[2][k])
		{
			if(seen[(unsigned char)av[2][k]] == 0)
			{
				write(1, &av[2][k], 1);
				seen[(unsigned char) av[2][k]] = 1;
			}
			k++;
		}
	}
	write(1, "\n", 1);
}