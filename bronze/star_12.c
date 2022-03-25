#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	n;

	scanf("%d", &n);

	i = 0;
	while (i < 2 * n - 1)
	{
		j = 0;
		while (j < n)
		{
			if (j + i + 1 < n || i - j + 1 > n)
				printf(" ");
			else
				printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
