#include <stdio.h>

int	g_box[10000];

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
		if (num[i] <= num[j])
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
	l = start;
	while (l <= end)
	{
		num[l] = g_box[l];
		l++;
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
	int	add;
	int	ans;
	int	num[1000];

	scanf("%d", &n);

	i = 0;
	while (i < n)
	{
		scanf("%d", &num[i]);
		i++;
	}
	ft_msort(0, n - 1, num);		//merge_sort
	add = 0;
	ans = 0;
	i = 0;
	while (i < n)
	{
		add = add + num[i];			//각 사람마다 인출 시간
		ans = ans + add;			//총 인출 시간
		i++;
	}
	printf("%d", ans);
	return (0);
}
