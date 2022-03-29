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

int	main(void)
{
	int		i;
	int		len_a;
	int		len_b;
	int		len_min;
	int		len_max;
	char	a[201];
	char	b[201];
	char	c;
	char	ans[201];

	scanf("%s", a);
	scanf(" %c", &c);
	scanf("%s", b);

	len_a = ft_strlen(a);
	len_b = ft_strlen(b);
	len_min = len_a < len_b ? len_a : len_b;
	len_max = len_a < len_b ? len_b : len_a;
	if (c == '+')
	{
		i = 0;
		while (i < len_max)
		{
			ans[i] = '0';
			i++;
		}
		if (len_a != len_b)
		{
			ans[0] = '1';
			ans[len_max - len_min] = '1';
		}
		else
			ans[0] = '2';
		i = 0;
		while (i < len_max)
		{
			printf("%c", ans[i]);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len_a + len_b - 1)
		{
			ans[i] = '0';
			i++;
		}
		ans[0] = '1';
		i = 0;
		while (i < len_a + len_b - 1)
		{
			printf("%c", ans[i]);
			i++;
		}
	}
	return (0);
}
