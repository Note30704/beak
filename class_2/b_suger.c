#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	j;

	scanf("%d", &n);

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if ((3 * i) + (5 * j) == n)
			{
				printf("%d\n", i + j);
				return (0);
			}
			j++;
		}
		i++;
	}
	printf("-1\n");

	return (0);
}
