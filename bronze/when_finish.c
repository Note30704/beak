#include <stdio.h>

int	main(void)
{
	int	h1;
	int	m1;
	int	h2;
	int	m2;
	int	h;
	int	m;
	int	time;
	int	day;

	while (1)
	{
		scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);

		if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
			return (0);
		day = 0;
		h = (h1 + h2) * 60;
		m = m1 + m2;
		time = h + m;
		h = time / 60;					//시간
		m = time % 60;					//분
		if (h >= 24)					//day체크
		{
			day = h / 24;
			h = h % 24;
		}
		if (day > 0)
			printf("%.2d:%.2d +%d\n", h, m, day);
		else
			printf("%.2d:%.2d\n", h, m);
	}
	return (0);
}
