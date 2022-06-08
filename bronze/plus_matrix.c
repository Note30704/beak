#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	n;
	int	m;
	int	num[200][100];

	scanf("%d %d", &n, &m);

	i = 0;
	while (i < 2 * n)
	{
		j = 0;
		while (j < m)
		{
			scanf("%d", &num[i][j]);
			
			if (i >= n)
				num[i - n][j] += num[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			printf("%d ", num[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
