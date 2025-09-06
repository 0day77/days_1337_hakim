#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(char q, char w, char c)
{
	ft_putchar(q);
	ft_putchar(w);
	ft_putchar(c);
	if (q < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	q;
	char	w;
	char	c;

	q = '0';
	while (q <= '7')
	{
		w = q + 1;
		while (w <= '8')
		{
			c = w + 1;
			while (c <= '9')
			{
				ft_print_numbers(q, w, c);
				c++;
			}
			w++;
		}
		q++;
	}
}
