int	max(int* tab, unsigned int len)
{
	if (len ==  0 || *tab == 0)
		return 0;

	unsigned int i = 0;
	int res = tab[i];
	while (i < len)
	{
		if (res < tab[i])
		{
			res = tab[i];
		}
		i++;
	}
	return res;
}