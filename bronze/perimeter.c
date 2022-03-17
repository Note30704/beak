#include <stdio.h>

int	main(void)
{
	int	w1;
	int	h1;
	int	w2;
	int	h2;
	int	ans;

	scanf("%d %d %d %d", &w1, &h1, &w2, &h2);

	ans = (h1 + h2) * 2;
	ans = ans + w1 + w2 + 4;
	if (w1 < w2)
		ans = ans + w2 - w1;
	else if (w1 > w2)
		ans = ans + w1 - w2;
	printf("%d", ans);
	return (0);
}
