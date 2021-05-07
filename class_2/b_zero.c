#include <stdio.h>

int	g_arr[100000];
int	g_i = 0;

void	ft_push(int	num)
{
	g_arr[g_i] = num;
	g_i++;
}

void	ft_pop(void)
{
	g_arr[g_i - 1] = 0;
	g_i--;
}

int	main(void)
{
	int	k;
	int	i;
	int	num;
	int	sum;

	scanf("%d", &k);

	i = 0;
	while (i < k)
	{
		scanf("%d", &num);
		if (num > 0)
			ft_push(num);
		else
			ft_pop();
		i++;
	}
	sum = 0;
	i = 0;
	while (i < k)
	{
		sum += g_arr[i];
		i++;
	}
	printf("%d", sum);
	return (0);
}
