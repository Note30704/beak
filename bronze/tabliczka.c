#include <stdio.h>

int	main(void)
{
	long long	a;
	long long	b;
	long long	tmp;

	scanf("%lld %lld", &a, &b);

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
		if ((a % 2 == 1) && (b % 2 == 1))
			printf("%lld", b);
		else
			printf("0");
		return (0);
}
