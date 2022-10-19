#include <stdio.h>
#include <string.h>

int		g_cnt;
char	g_stack[101];

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

void	push(char c)
{
	g_stack[g_cnt] = c;
	g_cnt++;
}

char	pop(char c)
{
	return (g_stack[--g_cnt]);
}

int	ft_balence(char *str)
{
	int		i;
	char	left;

	i = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[')
			push(str[i]);
		if (str[i] == ')' || str[i] == ']')
		{
			if (g_cnt == 0)
				return (0);
			else
				left = pop(g_stack[g_cnt]);
			if (left == '(' && str[i] != ')')
				return (0);
			else if (left == '[' && str[i] != ']')
				return (0);
		}
		i++;
	}
	if (g_cnt != 0)
		return (0);
	else
		return (1);
}

int	main(void)
{
	int		ans;
	int		len;
	char	str[100];

	while (1)
	{
		g_cnt = 0;
		memset(g_stack, 0, 101);
		gets(str);

		if (str[0] == '.')
			return (0);
		len = ft_strlen(str);
		str[len - 1] = '\0';

		if (ft_balence(str))
			printf("yes\n");
		else
			printf("no\n");
	}
	return (0);
}
