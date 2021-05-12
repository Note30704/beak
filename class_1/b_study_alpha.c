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
	int		max;
	int		count;
	char	str[100];
	int		alpha[26] ={0,};
	
	scanf("%s", str);

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';

		alpha[str[i] - 'a']++;
		i++;
	}
	
	max = 0;
	i = 0;
	while (i < 26)
	{
		if (max < alpha[i])
			max = alpha[i];
		i++;
	}
	
	count = 0;
	i = 0;
	while (i < 26)
	{
		if (alpha[i] == max)
			count++;
		i++;
	}
	if (count >= 2)
	{
		printf("?\n");
		return (0);
	}

	i = 0;
	while (i < 26)
	{
		if (alpha[i] == max)
			printf("%c", 'A' + i);
		i++;
	}
	return (0);
}
