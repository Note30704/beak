#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	y;
	int	m;
	int	c[20];

	scanf("%d", &n);

	y = 0;
	m = 0;
	i = 0;
	while (i < n)
	{
		scanf("%d", &c[i]);
		y = y + (c[i] / 30 + 1) * 10;
		m = m + (c[i] / 60 + 1) * 15;
		i++;
	}
	if (y < m)
		printf("Y %d", y);
	else if (y > m)
		printf("M %d", m);
	else
		printf("Y M %d", y);
	return (0);
}
