#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	num;
	int	max;
	int	min;

	scanf("%d", &n);

	max = -1000000;
	min = 1000000;
	i = 0;
	while (i < n)
	{	
		scanf("%d", &num);
		if (max < num)
			max = num;
		if (min > num)
			min = num;
		i++;
	}
	printf("%d %d", min, max);

	return(0);
}
