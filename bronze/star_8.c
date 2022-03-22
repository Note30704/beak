#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	k;
	double	n;

	scanf("%lf", &n);

	n = 2 * n;
	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n / 2)
		{
			if (j > i || j > n - i - 2)
				printf(" ");
			else
				printf("*");
			j++;
		}
		j = n / 2;
		while (j < n)
		{
			if (j < i + 1 || j < n - i - 1)
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
