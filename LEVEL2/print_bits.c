#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned int bit;

	while (i--)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
	}
}