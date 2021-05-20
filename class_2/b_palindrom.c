#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	ft_palindorm(int len, char *str)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] != str[len - 1])
			return (0);
		i++;
		len--;
	}
	return (1);
}

int	main(void)
{
	int		len;
	char	str[100000];

	while (1)
	{
		scanf("%s", str);
		if (str[0] == '0')
			return (0);
		len = ft_strlen(str);
		if (ft_palindorm(len, str))
			printf("yes\n");
		else
			printf("no\n");
	}
	return (0);
}
