#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_is_invalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base)
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		if (base[i] == ' ' || (base[i] >= '\t' && base[i] <= '\r'))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	l_nbr;
	int		int_base;

	l_nbr = (long)nbr;
	int_base = ft_strlen(base);
	if (base_is_invalid(base) || int_base <= 1)
		return ;
	if (l_nbr < 0)
	{
		write(1, "-", 1);
		l_nbr = l_nbr * (-1);
	}
	if (l_nbr > int_base - 1)
	{
		ft_putnbr_base(l_nbr / int_base, base);
		ft_putnbr_base(l_nbr % int_base, base);
	}
	else
		write(1, &base[l_nbr], 1);
}
