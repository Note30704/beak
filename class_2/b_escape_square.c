#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	w;
	int	h;
	int	min_a;
	int	min_b;

	scanf ("%d %d %d %d", &x, &y, &w, &h);

	if ((w - x) > x)
		min_a = x;
	else
		min_a = w - x;
	if ((h - y) > y)
		min_b = y;
	else
		min_b = h - y;

	if (min_a < min_b)
		printf ("%d", min_a);
	else
		printf ("%d", min_b);


	return (0);
}
