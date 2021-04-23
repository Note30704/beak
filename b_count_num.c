#include <stdio.h>

void	arr_num(int	sum, char *arr)
{
	int	i;
	int	num;

	i = 0;
	while (i < 10)
	{
		arr[i] = 0;
		i++;
	}
	num  = 0;
	while (sum != 0)
	{
		num = sum % 10;
		arr[num] += 1;
		sum /= 10;
	}
}

int	main(void)
{
	int		n;
	int		sum;
	int		i;
	char	arr[10];
		
	sum = 1;
	i = 0;
	while (i < 3)
	{
	scanf("%d" , &n);
	sum = sum * n;
	i++;
	}

	arr_num(sum, arr);

	i = 0;
	while (i < 10)
	{
		printf ("%d\n", arr[i]);
		i++;
	}
	return (0);
}
