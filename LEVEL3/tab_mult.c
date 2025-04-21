#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}
void ft_putnbr(int n)
{
	if (n >=10)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}
int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 1;
		int num = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(i * num);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}