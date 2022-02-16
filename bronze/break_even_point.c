#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	ans;

	scanf("%d %d %d", &a, &b, &c);

	if (b >= c)
		printf("-1");
	else
	{
		ans = a / (c - b) + 1;
		printf("%d", ans);
	}
	return (0);
}
