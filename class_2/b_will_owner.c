#include <stdio.h>

int	main(void)
{
	int	t;
	int	k;
	int	n;
	int	i;
	int	j;
	int arr[15][15] = {0,};

	scanf ("%d", &t);

	while (t)
	{
		scanf("%d %d", &k, &n);
		i = 0;
		while (i <= n)
		{
			arr[0][i] = i;
			i++;
		}
		i = 1;
		while (i <= n)
		{
			j = 1;
			while (j <= n)
			{
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
				j++;
			}
			i++;
		}
		printf ("%d\n", arr[k][n]);
		t--;
	}

	return (0);
}
