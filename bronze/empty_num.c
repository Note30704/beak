#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	num;

	scanf("%d", &num);

	if (num / 100 > 1)
	{
		a = num / 100;
		b = num % 100;
	}
	else
	{
		a = num / 10;
		b = num % 10;
	}
	printf("%d", a + b);
	return (0);
}
