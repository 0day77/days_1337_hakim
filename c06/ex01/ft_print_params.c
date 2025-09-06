#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}
}
