#include <stdio.h>

int	ft_max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	main(void)
{
	int	i;
	int	a1;
	int	a2;
	int	x[4];
	int	y[4];

	i = 0;
	while (i < 4)
	{
		scanf("%d %d", &x[i], &y[i]);
		i++;
	}
	a1 = ft_max(x[1], x[3]) - ft_min(x[0], x[2]);
	a2 = ft_max(y[1], y[3]) - ft_min(y[0], y[2]);
	if (a1 < a2)
		printf("%d", a2 * a2);
	else
		printf("%d", a1 * a1);
	return (0);
}
