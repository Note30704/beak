#include <stdio.h>

int	main(void)
{
	int	L;
	int	a;
	int	b;
	int	c;
	int	d;
	int	ans;

	scanf("%d %d %d %d %d",&L,&a, &b, &c, &d);

	if (a / c < b / d)
	{
		ans = b / d;
		if (b % d != 0)
			ans = ans + 1;
	}
	else
	{
		ans = a / c;
		if (a % c != 0)
			ans = ans + 1;
	}
	printf("%d", L - ans); 
	return (0);
}
