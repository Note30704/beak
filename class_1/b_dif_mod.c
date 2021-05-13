#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	count;
	int	num[42] = {0,};

	i = 0;
	while(i < 10)
	{
		scanf("%d", &n);
		num[n % 42]++;
		i++;
	}
	count = 0;
	i = 0;
	while (i < 42)
	{
		if (num[i] != 0)
			count++;
		i++;
	}
	printf("%d\n", count);
	return (0);
}
