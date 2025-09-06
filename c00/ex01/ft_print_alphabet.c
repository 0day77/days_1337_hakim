#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	g;

	g = 'a';
	while (g <= 'z')
	{
		write(1, &g, 1);
		g++;
	}
}
