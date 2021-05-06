#include <stdio.h>
#include <stdlib.h>

int	box[1000000];

void	ft_merge(int start, int mid, int end, int *arr)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = start;
	j = mid + 1;
	k = start;
	while (i <= mid && j<= end)
	{
		if (arr[i] <= arr[j])
		{
			box[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			box[k] = arr[j];
			k++;
			j++;
		}
	}
	
	if (i > mid)
	{
		l = j;
		while (l <= end)
		{
			box[k] = arr[l];
			k++;
			l++;
		}
	}
	else
	{
		l = i;
		while (l <= mid)
		{
			box[k] = arr[l];
			k++;
			l++;
		}
	}

	l = start;
	while (l <= end)
	{
		arr[l] = box[l];
		l++;
	}
}

void	ft_msort(int start, int end, int *arr)
{
	int mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		ft_msort(start, mid, arr);
		ft_msort(mid + 1, end, arr);
		ft_merge(start, mid, end, arr);
	}
}

int	main(void)
{
	int	n;
	int	i;
	int	*arr;

	scanf("%d", &n);

	arr = (int *)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	ft_msort(0, n - 1, arr);
	i = 0;
	while (i < n)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
