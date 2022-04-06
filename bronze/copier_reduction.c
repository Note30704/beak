#include <stdio.h>

int	main(void)
{
	double	a;
	double	b;
	double	c;
	double	d;
	int		num1;
	int		num2;
	double	max1;
	double	max2;
	double	min1;
	double	min2;

	while (1)
	{
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		
		if (a == 0 && b == 0 && c == 0 && d == 0)
			return (0);

		max1 = a > b ? a : b;
		min1 = a < b ? a : b;
		max2 = c > d ? c : d;
		min2 = c < d ? c : d;
		num1 = min2 / min1 * 100;
		num2 = max2 / max1 * 100;
		if (num1 > 100)
			num1 = 100;
		if (num2 > 100)
			num2 = 100;
		if (num1 < num2)
			printf("%d%%\n", num1);					//% 기호 출력방법
		else
			printf("%d%%\n", num2);
	}
	return (0);
}
