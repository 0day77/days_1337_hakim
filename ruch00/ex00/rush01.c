#include <unistd.h>

extern	void	ft_putchar(char c);

void	ft_rush(int width, char f, char m, char e)
{
	int	i;

	i = 1;
	while (i <= width)
	{
		if (i == 1)
			ft_putchar(f);
		else if (i == width)
			ft_putchar(e);
		else
			ft_putchar(m);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0)
	{
		write(2, "Error: width and height must be positive integers.\n", 51);
	}
	while (i <= y)
	{
		if (i == 1)
		{
			ft_rush(x, '/', '*', '\\');
		}
		else if (i == y)
		{
			ft_rush(x, '\\', '*', '/');
		}
		else
		{
			ft_rush(x, '*', ' ', '*');
		}
		i++;
	}
}
