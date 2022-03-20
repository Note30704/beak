#include <stdio.h>

void	ft_swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

int	main(void)
{
	int	x;
	int	y;
	int	ans[5];

	scanf("%d %d", &x, &y);

	ans[0] = x / 4;
	ans[1] = y / 4;
	if (x % 4 == 0)
		ans[0] = ans[0] - 1;
	if (y % 4 == 0)
		ans[1] = ans[1] - 1;
	ans[2] = x % 4;
	ans[3] = y % 4;
	if (ans[2] == 0)
		ans[2] = 4;
	if (ans[3] == 0)
		ans[3] = 4;
	if (ans[0] < ans[1])
		ft_swap(&ans[0], &ans[1]);
	if (ans[2] < ans[3])
		ft_swap(&ans[2], &ans[3]);
	ans[4] = ans[0] - ans[1] + ans[2] - ans[3];
	printf("%d", ans[4]);
	return (0);
}
