#include <stdio.h>

int	main(void)
{
	int	i;
	int	m;
	int	x;
	int	y;
	int	tmp;
	int	num[3];

	scanf("%d", &m);

	num[0] = 1;
	num[1] = 0;
	num[2] = 0;

	i = 0;
	while (i < m)
	{
		scanf("%d %d", &x, &y);

		tmp = num[x - 1];
		num[x - 1] = num[y - 1];
		num[y - 1] = tmp;
		i++;
	}
	i = 0;
	while (i < 3)
	{
		if (num[i] == 1)
			printf("%d", i + 1);
		i++;
	}
	return (0);
}
