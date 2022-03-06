#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	p;
	int	ans[3];

	scanf("%d %d %d", &a, &b, &c);

	ans[0] = a * 4 + b * 2;
	ans[1] = a * 2 + c * 2;
	ans[2] = b * 2 + c * 4;
	p = ans[0] < ans[1] ? ans[0] : ans[1];
	printf("%d", p < ans[2] ? p : ans[2]);
	return (0);
}
