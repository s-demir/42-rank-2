#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int num = atoi(av[1]);
		int i = 2;
		if (num == 1)
		{
			printf("1");
		}

		while (num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
				{
					break;
				}
				printf("*");
				num = num / i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
}