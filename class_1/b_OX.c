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
	int	n;
	int	i;
	int	len;
	int	count;
	int	ans;
	char OX[81];

	scanf("%d", &n);

	while (n)
	{
		scanf("%s", OX);
		
		len = ft_strlen(OX);
		count = 0;
		ans = 0;
		i = 0;
		while (i < len)
		{
			if (OX[i] == 'O')
				count++;
			else
				count = 0;
			ans = ans + count;
			i++;
		}
		printf("%d\n", ans);
		n--;
	}

	return (0);
}
