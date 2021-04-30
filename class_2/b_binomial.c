#include <stdio.h>

int	ft_factorial(int num)
{
	if (num < 0)
		return (0);
	if (num == 0)
		return (1);
	return (num * ft_factorial(num - 1));
}

int	main(void)
{
	int	n;
	int	k;
	int	sum;

	scanf ("%d %d", &n, &k);

	sum = ft_factorial(n) / (ft_factorial(k) * ft_factorial(n - k));
	printf ("%d", sum);
	return (0);
}
