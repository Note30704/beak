#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	n;
	int	m;
	int	k;
	int	ans;

	scanf("%d%d%d", &n, &m, &k);

	ans = 0;
	i = 0;
	while (i < n)
	{
		j = 0;
		while(j < m)
		{
			if (ans == k)
				printf("%d %d\n", i, j);
			ans++;
			j++;
		}
		i++;
	}
	return (0);
}
