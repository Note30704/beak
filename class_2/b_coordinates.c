#include <stdio.h>
#include <stdlib.h>

typedef struct c_point
{
	int	x;
	int y;
}				t_point;

t_point	g_box[100000];

void	ft_merge(int start, int mid, int end, t_point *arr)
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
		if (arr[i].x < arr[j].x)
		{
			g_box[k] = arr[i];
			k++;
			i++;
		}
		else if (arr[i].x > arr[j].x)
		{
			g_box[k] = arr[j];
			k++;
			j++;
		}
		else
		{
			if (arr[i].y < arr[j].y)
			{
				g_box[k] = arr[i];
				k++;
				i++;
			}
			else if (arr[i].y > arr[j].y)
			{
				g_box[k] = arr[j];
				k++;
				j++;
			}
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
	
	l = start;
	while (l <= end)
	{
		arr[l] = g_box[l];
		l++;
	}
}

void	ft_msort(int start, int end, t_point *arr)
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

int	main(void)
{
	int	n;
	int	i;
	t_point *arr;

	scanf("%d", &n);
	
	arr = (t_point *)malloc(sizeof(t_point) * n);

	i = 0;
	while (i < n)
	{
		scanf ("%d %d", &arr[i].x, &arr[i].y);
		i++;
	}
	
	ft_msort(0, n - 1, arr);
	i = 0;
	while (i < n)
	{
		printf ("%d %d\n", arr[i].x, arr[i].y);
		i++;
	}

	free(arr);
	return (0);
}
