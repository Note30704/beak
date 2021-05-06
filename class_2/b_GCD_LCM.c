#include <stdio.h>

int ft_maxmin(int a, int b)
{
	return (b? ft_maxmin(b, a % b) : a);
}

int	main(void)
{
	int	n;
	int	m;

	scanf("%d %d", &n, &m);

	printf("%d\n", ft_maxmin(n, m));
	printf("%d", n * m / ft_maxmin(n, m));

	return (0);
}

// 유클리드 호제법
