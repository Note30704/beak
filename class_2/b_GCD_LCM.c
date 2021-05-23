#include <stdio.h>

int	ft_uclid(int x, int y)
{
	return (y ? ft_uclid(y, x % y) : x);
}

int	main(void)
{
	int	x;
	int	y;
	int	LCM;
	int	GCD;

	scanf("%d%d", &x, &y);
	LCM = ft_uclid(x, y);
	GCD = (x * y) / LCM;

	printf("%d\n", LCM);
	printf("%d", GCD);
	return (0);
}
