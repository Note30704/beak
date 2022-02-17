#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	n;

	scanf("%d", &n);

	i = 1;
	j = 1;

	if (n == 1)
		printf("2");
	else
	{
		while ((i - 1) + j <= n)
		{
			if ((i + j) % 2 == 0)
				i++;
			else
				j++;
		}		
		printf("%d", i * j);
	}
	return (0);
}
