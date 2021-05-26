#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	n;
	int	sum;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (3 * i + 5 * j  == n)
			{
				sum = i + j;
				printf("%d", sum);
				return (0);
			}
			j++;
		}
		i++;
	}
	printf("-1\n");
	return (0);
}
