#include <stdio.h>

int	main(void)
{
	int	h;
	int	m;
	int	s;
	int	t;

	scanf("%d %d %d %d", &h, &m, &s, &t);

	while (s + t >= 60)
	{
		m++;
		t = t - 60;
	}
	while (m >= 60)
	{
			h++;
			m = m - 60;
	}
	s = s + t;
	m = m % 60;
	h = h % 24;
	printf("%d %d %d", h, m, s);
	return (0);
}
