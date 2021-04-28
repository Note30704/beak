#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	j;
	int	num;
	int	arr[10001] = {0,};

	scanf("%d", &n);

	i = 0;
	while (i < n)
	{
		scanf("%d", &num);
		arr[num] += 1;
		i++;
	}
	i = 1;
	while (i < 10001)
	{
		j = 0;
		while (j < arr[i])
		{
			printf("%d\n", i);
			j++;
		}
		i++;
	}
	return (0);
}
