#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *str = av[1];
		int i = 0;
		int flag = 0;

		while (str[i] == 32 || str[i] == 9)
		{
			i++;
		}
		while (str[i])
		{
			if (str[i] == 32 || str[i] == 9)
			{
				flag = 1;
			}
			else
			{
				if (flag)
					write(1, " ", 1);
				flag = 0;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}