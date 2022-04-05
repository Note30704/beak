#include <stdio.h>

void	ft_cnt(int a, int b, int *max, int cnt, int add)
{
	int	div_a;
	int	div_b;
	int	sum;

	if (a == 0 && b == 0)
		return ;
	div_a = a % 10;
	div_b = b % 10;
	sum = div_a + div_b + add;
	add = 0;
	if (sum >= 10)
	{
		add = 1;
		cnt++;
	}
	if (*max < cnt)
		*max = cnt;
	ft_cnt(a / 10, b / 10, max, cnt, add);
}

int	main(void)
{
	int	a;
	int	b;
	int	cnt;
	int	add;
	int	max;

	while (1)
	{
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
			return (0);
		cnt = 0;
		max = 0;
		add = 0;
		ft_cnt(a, b, &max, cnt, add);
		printf("%d\n", max);
	}
	return (0);
}
