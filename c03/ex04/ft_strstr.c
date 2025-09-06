char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return (str);
	while (str[i])
	{
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == 0)
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
