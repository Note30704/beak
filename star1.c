#include <stdio.h>

int	main(void)
{
	int	star;
	int	i;
	int	j;

	scanf("%d", &star);

	i = 0;
	while (i < star)
	{
		j = star - i;
		while (j <= star)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
