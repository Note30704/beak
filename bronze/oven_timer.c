#include <stdio.h>

int	main(void)
{
	int	h;
	int	m;
	int	t;

	scanf("%d %d %d", &h, &m, &t);

	while (m + t >= 60)
	{
			h++;
			t = t - 60;
	}
	m = m + t;
	h = h % 24;
	printf("%d %d", h, m);
	return (0);
}
