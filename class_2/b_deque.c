#include <stdio.h>

int	deque[10000];
int	f = 5000;
int	b = 5001;
int	count = 0;

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

void	ft_pushFront(int num)
{
	deque[f] = num;
	count++;
	f--;
}

void	ft_pushBack(int num)
{
	deque[b] = num;
	count++;
	b++;
}

void	ft_popFront(void)
{
	if (count == 0)
		printf("-1\n");
	else
	{
		printf("%d\n", deque[f + 1]);
		f++;
		count--;
	}
}

void	ft_popBack(void)
{
	if (count == 0)
		printf("-1\n");
	else
	{
		printf("%d\n", deque[b - 1]);
		b--;
		count--;
	}
}

void	ft_size(void)
{
	printf("%d\n", count);
}

void	ft_empty(void)
{
	if (count != 0)
		printf("0\n");
	else
		printf("1\n");
}

void	ft_front(void)
{
	if (count == 0)
		printf("-1\n");
	else
		printf("%d\n", deque[f + 1]);
}

void	ft_back(void)
{
	if (count == 0)
		printf("-1\n");
	else
		printf("%d\n", deque[b - 1]);
}

int	main(void)
{
	int		n;
	int		num;
	char	str[12];

	scanf("%d", &n);
	while (n)
	{
		scanf("%s", str);
		if (ft_strcmp("push_front", str) == 0)
		{
			scanf("%d", &num);
			ft_pushFront(num);
		}
		else if (ft_strcmp("push_back", str) == 0)
		{
			scanf("%d", &num);
			ft_pushBack(num);
		}
		else if (ft_strcmp("pop_front", str) == 0)
			ft_popFront();
		else if (ft_strcmp("pop_back", str) == 0)
			ft_popBack();
		else if (ft_strcmp("size", str) == 0)
			ft_size();
		else if (ft_strcmp("empty", str) == 0)
			ft_empty();
		else if (ft_strcmp("front", str) == 0)
			ft_front();
		else if (ft_strcmp("back", str) == 0)
			ft_back();
		n--;
	}
	return (0);
}
