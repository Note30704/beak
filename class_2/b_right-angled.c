#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	longest;
	int	shortest;
	int	middle;

	while (scanf("%d %d %d", &a, &b, &c))
	{
		if (a == 0 && b == 0 && c == 0)
			return (0);
		longest = (a > b ? a : b) > c ? (a > b ? a : b) : c;
		shortest = (a < b ? a : b) < c ? (a < b ? a : b) : c;
		middle = (a + b + c) - (longest + shortest);

		if (shortest * shortest + middle * middle == longest * longest)
			printf("right\n");
		else
			printf("wrong\n");
	}
	return (0);
}
