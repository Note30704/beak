#include <stdio.h>

int	make_sum(int x)
{
	int	sum;
	int	num;

	num = x;
	sum = 0;
	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	sum += x;
	return (sum);
}

int	main(void)
{
	int	n;
	long long	before;
	long long	i;

	scanf("%d", &n);
	
	i = 0;
	while (i < 1000000)
	{
		if (make_sum(i) == n)
		{
			before = i;
			break;
		}
		i++;
	}
	printf ("%lld", before);

	return (0);
}
