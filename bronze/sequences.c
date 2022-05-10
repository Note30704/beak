#include <stdio.h>

void	ft_checker(int s, int q, int v)
{
	int	i;
	int	ans;

	ans = 0;
	i = 0;
	while (ans < v)
	{
		ans = s + q * i;
		i++;
	}
	if (ans == v)
		printf("%d\n", i);
	else
		printf("X\n");
}

int	main(void)
{
	int	start;
	int	sq;
	int	value;

	while (1)
	{
		scanf("%d %d %d", &start, &sq, &value);

		if (start == 0 && sq == 0 && value == 0)
			return (0);
		ft_checker(start, sq, value);
	}
	return (0);
}
