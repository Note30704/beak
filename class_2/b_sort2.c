#include <stdio.h>

int	g_box[1000000];

void	ft_merge(int start, int mid, int end, int *num)
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
		if (num[i] < num[j])
		{
			g_box[k] = num[i];
			k++;
			i++;
		}
		else
		{
			g_box[k] = num[j];
			k++;
			j++;
		}
	}
	if (i > mid)
	{
		l = j;
		while (l <= end)
		{
			g_box[k] = num[l];
			k++;
			l++;
		}
	}
	else
	{
		l = i;
		while (l <= mid)
		{
			g_box[k] = num[l];
			k++;
			l++;
		}
	}
	i = start;
	while (i <= end)
	{
		num[i] = g_box[i];
		i++;
	}
}

void	ft_msort(int start, int end, int *num)
{
	int	mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		ft_msort(start, mid, num);
		ft_msort(mid + 1, end, num);
		ft_merge(start, mid, end, num);
	}
}

int	main(void)
{
	int	i;
	int	n;
	int	num[1000000];

	scanf("%d", &n);

	i = 0;
	while (i < n)
	{
		scanf("%d", &num[i]);
		i++;
	}
	ft_msort(0, n - 1, num);
	i = 0;
	while (i < n)
	{
		printf("%d\n", num[i]);
		i++;
	}
	return (0);
}
