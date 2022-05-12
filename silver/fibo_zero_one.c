#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	t;
	int	zero;
	int	one;
	int	tmp;

	scanf("%d", &t);

	while (t)
	{
		scanf("%d", &n);
		
		zero = 1;
		one = 0;
		i = 0;
		while (i < n)
		{
			tmp = zero + one;
			zero = one;
			one = tmp;
			i++;
		}
		printf("%d %d\n", zero, one);
		t--;
	}
	return (0);
}
