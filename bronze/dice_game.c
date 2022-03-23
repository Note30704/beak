#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	a;
	int	b;
	int	c;
	int	max;
	int	ans;

	scanf("%d", &n);

	max = 0;
	i = 0;
	while (i < n)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a == b && b == c && c == a)
			ans = 10000 + a * 1000;
		else if (a == b || a == c)
			ans = 1000 + a * 100;
		else if (b == c)
			ans = 1000 + b * 100;
		else
			ans = ((a < b ? b : a) > c ? (a < b ? b : a) : c) * 100; 
		if (max < ans)
			max = ans;
		i++;
	}
	printf("%d", max);
	return (0);
}
