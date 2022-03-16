#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	cnt;

	scanf("%d %d %d", &a, &b, &c);

	cnt = 0;
	while (a != b || b != c || c != a)
	{
		if (c != b)
		{
			c--;
			cnt++;
			b++;
		}
		if (b != a)
		{
			b--;
			cnt++;
			a++;
		}
	}
	printf("%d", cnt);
	return (0);
}
