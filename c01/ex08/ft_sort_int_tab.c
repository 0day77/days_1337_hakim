void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	o;
	int	bs;
	int	swp;

	i = 0;
	bs = size - 1;
	while (i < bs)
	{
		o = 0;
		while (o < bs - i)
		{
			if (tab[o] > tab[o + 1])
			{
				swp = tab[o];
				tab[o] = tab[o + 1];
				tab[o + 1] = swp;
			}
			o++;
		}
		i++;
	}
}
