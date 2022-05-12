#include <stdio.h>

int	main(void)
{
	int	n;
	int	max;
	int	min;
	int	num;

	scanf("%d", &n);

	max = 2;
	min = 1000000;
	while (n)
	{
		scanf("%d", &num);
		
		if (num > max)
			max = num;
		if (num < min)
			min = num;
		n--;
	}
	printf("%d", max * min);
	return (0);
}
