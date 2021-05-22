#include <stdio.h>

int	div_num(int	before)
{
	int	sum;

	sum = 0;
	while (before != 0)
	{
		sum = sum + before % 10;
		before = before / 10;
	}
	return (sum);
}

int	main(void)
{
	int	i;
	int	n;
	int	sum;

	scanf("%d", &n);

	i = 0;
	while (i < n)
	{
		sum = div_num(i);
		if (i + sum == n)
		{
			printf("%d\n", i);
			return (0);
		}
		i++;
	}
	printf("0\n");
	return (0);
}
