#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	ans[2];
	int	st[2][4];

	i = 0;
	while (i < 2)
	{
		ans[i] = 0;
		j = 0;
		while (j < 4)
		{
			scanf("%d", &st[i][j]);
			ans[i] = ans[i] + st[i][j];
			j++;
		}
		i++;
	}
	if (ans[0] < ans[1])
		printf("%d", ans[1]);
	else
		printf("%d", ans[0]);
	return (0);
}
