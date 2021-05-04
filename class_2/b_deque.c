#include <stdio.h>

int	g_arr[10000];
int	g_i = 5000;
int	g_j = 5001;
int	count = 0;

void	push_front(int num)
{
	g_arr[g_i] = num;
	g_i--;
	count++;
}
void	push_back(int num)
{
	g_arr[g_j] = num;
	g_j++;
	count++;
}

void	pop_front(void)
{
	if (count != 0)
	{
		printf("%d\n", g_arr[g_i + 1]);
		g_i++;
		count--;
	}
	else
		printf("-1\n");
}
void	pop_back(void)
{
	if (count != 0)
	{
		printf("%d\n", g_arr[g_j - 1]);
		g_j--;
		count--;
	}
	else
		printf("-1\n");
}

void	size(void)
{
	printf("%d\n", count);
}

void	empty(void)
{
	if (count != 0)
		printf("0\n");
	else
		printf("1\n");
}

void	front(void)
{
	if (count != 0)
		printf("%d\n", g_arr[g_i + 1]);
	else
		printf("-1\n");
}

void	back(void)
{
	if (count != 0)
		printf("%d\n", g_arr[g_j - 1]);
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
	char	str[11];

	scanf("%d", &n);
	
	while (n)
	{
		scanf("%s", str);
		
		if (ft_strcmp(str, "push_front") == 0)
		{
			scanf("%d", &num);
			push_front(num);
		}
		else if (ft_strcmp(str, "push_back") == 0)
		{
			scanf("%d", &num);
			push_back(num);
		}
		else if (ft_strcmp(str, "pop_front") == 0)
			pop_front();
		else if (ft_strcmp(str, "pop_back") == 0)
			pop_back();
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
