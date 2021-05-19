#include <stdio.h>

int	main(void)
{
	int		x;
	int		y;
	int		w;
	int		h;
	int		min;

	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	min = 1000;
	if (min > h - y)
		min =  h - y;
	if (min > y)
		min = y;
	if (min > w - x)
		min = w - x;
	if (min > x)
		min = x;
	printf("%d\n", min);

	return (0);
}
