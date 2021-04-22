#include <stdio.h>

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
	int		i;
	int		j;
	int		len;
	int		res[26];
	int		flag[26];
	char	alpha[26];
	char	str[101];

	scanf("%s", str);

	len = str_len(str);
	i = 0;
	while (i < 26)
	{
		alpha[i] = 'a' +  i;
		flag[i] = 0;
		res[i] = -1;
		i++;
	}
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < 26)
		{
			if (str[i] == alpha[j])
			{
				flag[j] = flag[j] + 1;
				if(flag[j] == 1)
					res[j] = i;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 26)
	{
		printf ("%d ", res[i]);
		i++;
	}
	return (0);
}
