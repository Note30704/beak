#include <stdio.h>

int	main(void)
{
	int	i;
	int	count;
	int	max;
	int	num[9];

	max = 0;
	i = 0;
	while (i < 9)
	{
		scanf("%d", &num[i]);
		if (max < num[i])
		{
			max = num[i];
			count = i + 1;
		}
		i++;
	}
	printf("%d\n%d\n", max, count);
	return (0);
}
