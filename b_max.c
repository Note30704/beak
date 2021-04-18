#include <stdio.h>

int	main(void)
{
	int	i;
	int	tmp;
	int	count;
	int	max;
	int	arr[9];

	i = 0;
	while (i < 9)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	max = arr[0];
	count = 1;
	i = 1;
	while (i < 9)
	{
		if (max < arr[i])
		{
			count = i + 1;
			max = arr[i];
		}
		i++;
	}
	printf ("%d\n%d", max, count);
	return (0);
}
