#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	cnt;
	int	ans1;
	int	ans2;

	while (1)
	{
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
			return (0);
		cnt = a - b;
		ans1 = cnt / 2;
		cnt = cnt % 2;
		ans2 = 0;
		if (ans1 > 0 && cnt > 0)
		{
			ans1 = ans1 - 1;
			ans2 = 1;
		}
		printf("%d %d\n", ans1, ans2);
	}
	return (0);
}
