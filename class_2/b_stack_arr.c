#include <stdio.h>
#include <string.h>

char	g_stack[200002];
int		g_arr[100002];
int		cnt = 1;
int		save = 1;
int		g_len = 0;

void	ft_push(int num)
{
	g_stack[g_len] = '+';
	g_arr[cnt] = num;
	cnt++;
	save++;
	g_len++;
}

int		ft_pop(int num)
{
	g_stack[g_len] = '-';
	g_len++;
	cnt--;
	if (g_arr[cnt] == num)
	{
		g_arr[cnt] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_stack_arr(int n)
{
	int	i;
	int	input;
	int	flag = 1;

	while (n)
	{
		scanf("%d", &input);
		
		while (save <= input)
			ft_push(save);

		if (ft_pop(input) == 0)
			flag = 0;
		n--;
	}
	return (flag);
}

int	main(void)
{
	int	i;
	int	n;

	scanf("%d", &n);

	memset(g_arr, 0, sizeof(g_arr));

	if (ft_stack_arr(n) == 0)
		printf("NO");
	else
	{
		i = 0;
		while (i < g_len)
		{
			printf("%c\n", g_stack[i]);
			i++;
		}
	}
	return (0);
}
