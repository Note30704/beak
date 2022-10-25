#include <stdio.h>

int	ft_max(int a, int b)
{
	return (a < b ? b : a);
}

int	main(void)
{
	int	i;
	int	j;
	int	n;
	int	max;
	int	answer;
	int	tri[501][501] = {0,};
	int	ans[501][501] = {0,};

	scanf("%d", &n);

	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			scanf("%d", &tri[i][j]);
			j++;
		}
		i++;
	}
	ans[1][1] = tri[1][1];
	i = 2;
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			if (j == 1)
				ans[i][1] = tri[i][1] + ans[i - 1][j];
			else if (j == i)
				ans[i][j] = tri[i][j] + ans[i - 1][j - 1];
			else
				ans[i][j] = ft_max(tri[i][j] + ans[i - 1][j - 1], tri[i][j] + ans[i - 1][j]);
			j++;
		}
		i++;
	}
	max = 0;
	i = 1;
	while (i <= n)
	{
		if (max < ans[n][i])
			max = ans[n][i];
		i++;
	}
	printf("%d", max);
	return (0);
}
