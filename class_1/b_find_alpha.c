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
	int		j;
	int		len;
	char	str[101];
	int		alpha[26];
	int		ans[26];

	scanf("%s", str);

	len =ft_strlen(str);
	i = 0;
	while (i < 26)
	{
		alpha[i] = 0;
		ans[i] = -1;
		i++;
	}
	
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < 26)
		{
			if (str[i] == 'a' + j)
			{
				alpha[j] = alpha[j] + 1;
				if (alpha[j] == 1)
					ans[j] = i;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 26)
	{
		printf("%d ", ans[i]);
		i++;
	}
	return (0);
}
