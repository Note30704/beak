#include <stdio.h>

int	g_box[100001];

void	ft_merge(int start, int mid, int end, int *arr)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = start;
	j = mid + 1;
	k = start;
	while (i <= mid && j <= end)
	{
		if (arr[i] < arr[j])
		{
			g_box[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			g_box[k] = arr[j];
			k++;
			j++;
		}
	}
	if (i > mid)
	{
		l = j;
		while (l <= end)
		{
			g_box[k] = arr[l];
			k++;
			l++;
		}
	}
	else
	{
		l = i;
		while (l <= mid)
		{
			g_box[k] = arr[l];
			k++;
			l++;
		}
	}
	i = start;
	while (i <= end)
	{
		arr[i] = g_box[i];
		i++;
	}
}

void	ft_msort(int start, int end, int *arr)
{
	int	mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		ft_msort(start, mid, arr);
		ft_msort(mid + 1, end, arr);
		ft_merge(start, mid, end, arr);
	}
}

int		check_att(int n, int att, int *arr)
{
	int	start;
	int	end;
	int	mid;

	start = 0;
	end = n;
	while (start < end)
	{
		mid = (start + end) / 2;
		if (att == arr[mid])
			return (1);
		else if (att < arr[mid])
			end = mid;
		else if (att > arr[mid])
			start = mid + 1;
	}
	return (0);
}

int		main(void)
{
	int	i;
	int	n;
	int	arr[100001];
	int	m;
	int	att;

	scanf("%d", &n);
	
	i = 0;
	while (i < n)
	{
		scanf ("%d" , &arr[i]);
		i++;
	}
	ft_msort(0, n - 1, arr);

	scanf("%d", &m);
	i = 0;
	while (i < m)
	{
		scanf ("%d" , &att);
		printf ("%d\n", check_att(n, att, arr));
		i++;
	}
	return (0);
}
