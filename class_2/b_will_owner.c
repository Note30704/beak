#include <stdio.h>

int	main(void)
{
	int	T;
	int	k;
	int	n;
	int	i;
	int	j;
	int	apt[15][15] = {0,};

	scanf("%d", &T);

	i = 0;
	while (i < 15)
	{
		apt[0][i] = i;
		i++;
	}
	while (T)
	{
		scanf("%d %d", &k, &n);
		
		i = 1;
		while (i <= k)
		{
			j = 1;
			while (j <= n)
			{
				apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
				j++;
			}
			i++;
		}
		printf("%d\n", apt[k][n]);
		T--;
	}
	return (0);
}
