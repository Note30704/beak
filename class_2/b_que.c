#include <stdio.h>

int	g_arr[10000];
int	g_i = 0;
int	g_j = 0;
int	g_count = 0;

void	push(int num)
{
	g_arr[g_i] = num;
	g_i++;
	g_count++;
}

void	pop(void)
{
	if (g_count != 0)
	{
		printf("%d\n", g_arr[g_j]);
		g_j++;
		g_count--;
	}
	else
		printf("-1\n");
}
void	size(void)
{
	if (g_count != 0)
		printf("%d\n", g_count);
	else
		printf("0\n");
}

void	empty(void)
{
	if (g_count != 0)
		printf ("0\n");
	else
		printf("1\n");
}

void	front(void)
{
	if (g_count != 0)
		printf("%d\n", g_arr[g_j]);
	else
		printf("-1\n");
}

void	back(void)
{
	if (g_count != 0)
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
		else if (ft_strcmp(str, "front") == 0)
			front();
		else if (ft_strcmp(str, "back") == 0)
			back();
		n--;
	}
	return (0);
}
