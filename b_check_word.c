#include <stdio.h>

int	is_printable(char *str)
{
	if (*str >= 33 && *str <= 126)
		return (1);
	return (0);
}

int	main(void)
{
	int	 	count;
	char	str[1000000];
	int		i;

	scanf("%[^\n]", str);
	
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && !is_printable(&str[i + 1]))
		{
			count++;
		}
		i++;
	}
	printf("%d", count);
	return (0);
}
