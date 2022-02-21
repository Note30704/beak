#include <stdio.h>

int	main(void)
{
	int	d;
	int	h;
	int	m;
	int	ans;

	scanf("%d %d %d", &d, &h, &m);

	ans = (d * 24 * 60 + h * 60 + m) - 16511;
	if (ans >= 0)
		printf("%d", ans);
	else
		printf("-1");
	return (0);
}
