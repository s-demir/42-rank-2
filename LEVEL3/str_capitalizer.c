#include <unistd.h>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 1;
		while (i < ac)
		{
			char *str = av[i];
			int k = 0;

			while (str[k])
			{
				if (str[k] >= 'A' && str[k] <= 'Z')
				{
					str[k] +=32;
				}
				
				if ((str[k - 1] == 32 || k == 0) && (str[k] >= 'a' && str[k] <= 'z'))
				{
					str[k] -=32;
				}
				write(1, &str[k], 1);
				k++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}