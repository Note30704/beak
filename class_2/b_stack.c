#include <stdio.h>

int	g_stack[100000];
int	i = 0;

int	ft_strcmp (char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_push (int num)
{
	g_stack[i] = num;
	i++;
}

void	ft_pop(void)
{
	if (g_stack[i - 1] == 0)
		printf("-1\n");
	else
	{
		printf("%d\n", g_stack[i - 1]);
		i--;
	}
}

void	ft_size(void)
{
	printf("%d\n", i);
}

void	ft_empty(void)
{
	if (i > 0)
		printf("0\n");
	else
		printf("1\n");
}

void	ft_top(void)
{
	if (i > 0)
		printf("%d\n", g_stack[i - 1]);
	else
		printf("-1\n");
}

int	main(void)
{
	int		n;
	int		num;
	char	str[6];

	scanf("%d", &n);
	while (n)
	{
		scanf("%s", str);
		if (ft_strcmp("push", str) == 0)
		{
			scanf("%d", &num);
			ft_push(num);
		}
		else if (ft_strcmp("pop", str) == 0)
			ft_pop();
		else if (ft_strcmp("size", str) == 0)
			ft_size();
		else if (ft_strcmp("empty", str) == 0)
			ft_empty();
		else if (ft_strcmp("top", str) == 0)
			ft_top();
		n--;
	}
	return (0);
}
