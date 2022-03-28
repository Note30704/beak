#include <stdio.h>

int	main(void)
{
	int	g;
	int	b;
	int	k;
	int	ans;

	scanf("%d %d %d", &g, &b, &k);

	while (k)
	{
		if (g < 2 * b)
			b = b - 1;
		else
			g = g - 1;
		k--;
	}
	g = g / 2;
	if (g > b)
		printf("%d", b);
	else
		printf("%d", g);
	return (0);
}
