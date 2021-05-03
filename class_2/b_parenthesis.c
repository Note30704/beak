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

int	check_parenthesis(int len, char *p)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < len)
	{
		if (p[i] == '(')
		{
			p[i] = 1 + count;
			count++;
		}
		else
		{
			p[i] = len / 2 - count;
			count--;
		}
		if (count < 0)
			return (0);
		i++;
	}
	if (count != 0)
		return (0);
	else
		return (1);
}

int	main(void)
{
	int		t;
	int		len;
	int		ans;
	char	p[51];
	
	scanf("%d", &t);
	
	while (t)
	{
		scanf("%s", p);
		len = str_len(p);
		ans = check_parenthesis(len, p);
		if (ans == 1)
			printf("YES\n");
		else
			printf("NO\n");
		t--;
	}
	return (0);
}
