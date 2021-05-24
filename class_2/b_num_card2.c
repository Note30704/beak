#include <stdio.h>

int    g_box[500000];

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

void    ft_merge(int start, int mid, int end, int *arr)
{
    int    i;
    int    j;
    int    k;
    int    l;
    
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


void    ft_msort(int start, int end, int *arr)
{
    int    mid;
    
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
	ft_msort(0, n - 1, arr);

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
