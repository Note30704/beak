#include <stdio.h>

int	ft_start(int start, int end, int *arr, int att)
{
	int	mid;

	while (start != end)
	{
		mid = (start + end) / 2;
		if (arr[mid] < att)
			start = mid + 1;
		else
			end = mid;
	}
	return (start);
}

int	ft_end(int start, int end, int *arr, int att)
{
	int	mid;

	while (start != end)
	{
		mid = (start + end) / 2;
		if (arr[mid] <= att)
			start = mid + 1;
		else
			end = mid;
	}
	return (end);
}

void	ft_qsort(int start, int end, int *arr)
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
		while (arr[j] > arr[key] && j >start)
			j--;
		if (i > j)
		{
			tmp = arr[j];
			arr[j] =arr[key];
			arr[key] = tmp;
		}
		else
		{
			tmp = arr[j];
			arr[j] = arr[i];
			arr[i] = tmp;
		}
	}
	ft_qsort(start, j - 1, arr);
	ft_qsort(j + 1, end, arr);
}

int	main(void)
{
	int	n;
	int	i;
	int	arr[500000];
	int	m;
	int	att;
	int	save;

	scanf("%d", &n);

	i = 0;
	while (i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	ft_qsort(0, n - 1, arr);

	scanf("%d", &m);

	i = 0;
	while(i < m)
	{
		scanf("%d", &att);
		save = ft_end(0, n, arr, att) - ft_start(0, n, arr, att);
		printf("%d ", save);
		i++;
	}
	return (0);
}
