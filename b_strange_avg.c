#include <stdio.h>

int	main(void)
{
	int		n;
	int		i;
	double	max;
	double	arr[1000];
	double	div;
	double	sum;

	scanf("%d", &n);
	
	i = 0;
	sum = 0;
	max = 0;
	while (i < n)
	{
		scanf("%lf" , &arr[i]);
		if (max < arr[i])
			max = arr[i];
		i++;
	}	
	i  = 0;
	while (i < n)
	{
		sum = sum + ((arr[i] / max) * 100);
		i++;
	}
	
	sum = sum / n;
	printf("%lf", sum);
	return (0);
}
