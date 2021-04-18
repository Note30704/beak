#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;

	scanf("%d", &n);

	i = 1;
	while (i <= 9)
	{
		printf("%d * %d = %d\n", n, i, i * n);
		i++;
	}
	return (0);
}
