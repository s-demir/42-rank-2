#include <unistd.h>

int main(int ac, char **av)
{
	if (ac==2)
	{
		int i = 0;
		int flag = 0;
		while (av[1][i] == '\0' || av[1][i] == 32 || av[1][i] == 9)
		{
				i++;
		}
		while (av[1][i])
		{
			if (av[1][i] == 32 || av[1][i] == 9)
				flag = 1;
			else
			{
				if (flag != 0)
					write(1, "   ", 3);
				flag = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}