#include <stdio.h>

void	print_str(int n, int len, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < n)
		{
			printf("%c", str[i]);
			j++;
		}
		i++;
	}
}

int	str_len(char *str)
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

int	main(void)
{
	int		n;
	int		m;
	int		i;
	int		j;
	int		len;
	char	str[20];

	scanf("%d", &n);
	m = n;
	while (m)
	{
		scanf("%d %s", &n, str);
		len = str_len(str);
		print_str(n, len, str);
		m--;
		printf ("\n");
	}
	return (0);
}
