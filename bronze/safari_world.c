#include <stdio.h>

int	main(void)
{
	long	n;
	long	m;
	long	tmp;

	scanf("%ld %ld", &n, &m);

	if (n < m)
	{
		tmp = m;
		m = n;
		n = tmp;
	}
	printf("%ld", n - m);
	return (0);
}
