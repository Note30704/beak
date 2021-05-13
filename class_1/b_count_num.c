#include <stdio.h>

int	main(void)
{
	int	i;
	int	num;
	int	sum;
	int	n_arr[10] = {0,};

	sum = 1;
	i = 0;
	while (i < 3)
	{
		scanf("%d", &num);
		sum = sum * num;
		i++;
	}
	while (sum)
	{
		n_arr[sum % 10]++;
		sum = sum / 10;
	}
	i = 0;
	while (i < 10)
	{
		printf("%d\n", n_arr[i]);
		i++;
	}
	return (0);
}
