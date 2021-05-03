#include <stdio.h>

int	g_arr[10000];
int	g_i = 0;

void	push(int num)
{
	g_arr[g_i] = num;
	g_i++;
}

void	pop(void)
{
	if (g_i != 0)
	{
		printf("%d\n", g_arr[g_i - 1]);
		g_arr[g_i - 1] = 0;
		g_i--;
	}
	else
		printf("-1\n");
}

void	size(void)
{
	printf("%d\n", g_i);
}

void	empty(void)
{
	if (g_i != 0)
		printf("0\n");
	else
		printf("1\n");
}

void	top(void)
{
	if (g_i != 0)
		printf("%d\n", g_arr[g_i - 1]);
	else
		printf("-1\n");
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
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
		
		if (ft_strcmp(str, "push") == 0)
		{
			scanf("%d", &num);
			push(num);
		}
		else if (ft_strcmp(str, "pop") == 0)
			pop();
		else if (ft_strcmp(str, "size") == 0)
			size();
		else if (ft_strcmp(str, "empty") == 0)
			empty();
		else if (ft_strcmp(str, "top") == 0)
			top();
		n--;
	}
	return (0);
}
