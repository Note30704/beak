#include <stdio.h>

int	main(void)
{
	long long	i;
	long long	n;
	long long	ans;

	scanf("%lld", &n);

	if (n % 2 == 1)
		printf("0");
	else
	{
		ans = 0;
		i = 1;
		while (i <= n)
		{
			ans = ans + (i % 10);
			i++;
		}
	if (ans % 2 == 1)
		printf("1");
	else
		printf("2");
	}
	return (0);
}
