#include <stdio.h>

int	ft_is_prime(int	arr)
{
	long long	i;

	if (arr <= 1)
		return (0);
	i = 2;
	while (i < arr)
	{
		if (arr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	n;
	int	i;
	int	count;
	int	arr[1000];

	scanf ("%d", &n);
	
	count = 0;
	i = 0;
	while (i < n)
	{
		scanf("%d", &arr[i]);
		if (ft_is_prime(arr[i]))
			count++;
		i++;
	}

	printf ("%d", count);

	return (0);
}
