#include <stdio.h>

void	ft_stack(int a, int b)
{
	int	t;

	if (b == 0)
		return;
	printf("%d\n", a * (b % 10));
	ft_stack(a, b / 10);
}

int	main(void)
{
	int	a;
	int	b;

	scanf("%d %d", &a, &b);

	ft_stack(a, b);
	printf("%d", a * b);
	return (0);
}
