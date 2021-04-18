#include <stdio.h>

int	sorted_scale(int *arr)
{
	int	i;
	int j;
	int	count;
	int	tmp;

	count = 1;
	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 8)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}

int	main(void)
{
	int		i;
	int		count;
	int		arr[8];

	i = 0;
	while (i < 8)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	count = sorted_scale(arr);
	if (count == 29)
		printf ("ascending");
	else if (count == 1)
		printf ("descending");
	else
		printf ("mixed");
	return (0);
}
