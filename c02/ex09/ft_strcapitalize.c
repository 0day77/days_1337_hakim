void	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	one;

	i = 0;
	one = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (one == 1)
			{
				str[i] -= 32;
				one = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			one = 0;
		else
			one = 1;
		i++;
	}
	return (str);
}
