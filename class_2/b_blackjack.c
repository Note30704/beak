#include <stdio.h>
#include <stdlib.h>

int		near_blackjack(int n, int m, int *arr)
{
	int	i;
	int	j;
	int	k;
	int	total;

	total = 0;
	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			k = j + 1;
			while (k < n)
			{
				if (arr[i] + arr[j] + arr[k] <= m)
				{
					if ( total < arr[i] + arr[j] + arr[k])
						total = arr[i] + arr[j] + arr[k];
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (total);
}

void	qsort_arr(int start, int end, int *arr)
{
	int	key;
	int	i;
	int	j;
	int	tmp;

	if (start >= end)
		return ;
	key = start;
	i = start + 1;
	j = end;
	while (i <= j)
	{
		while (arr[i] <= arr[key])
			i++;
		while (arr[j] > arr[key] && j > start)
			j--;
		if (i > j)
		{
			tmp = arr[j];
			arr[j] = arr[key];
			arr[key] = tmp;
		}
		else
		{
			tmp = arr[j];
			arr[j] = arr[i];
			arr[i] = tmp;
		}
	}
	qsort_arr(start, j - 1, arr);
	qsort_arr(j + 1, end, arr);

}

int	main(void)
{
	int	n;
	int	m;
	int	i;
	int	j;
	int	*arr;
	int	total;

	scanf("%d %d", &n, &m);
	
	arr = (int *)malloc(sizeof(int) * (n + 1));
	i  = 0;
	while (i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	qsort_arr(0, n - 1, arr);
	total = near_blackjack(n, m, arr);
	printf ("%d", total);
	free(arr);
	return (0);
}
