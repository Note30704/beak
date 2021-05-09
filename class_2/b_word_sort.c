#include <stdio.h>
#include <stdlib.h>

typedef	struct	c_point
{
	char str[51];
	int	len;
}				w_point;

w_point	g_box[20000];

int	ft_strlen(char *str)
{
	int len;
	
	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_merge(int start, int mid, int end, w_point *arr)
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
		if (arr[i].len < arr[j].len)
		{
			g_box[k] = arr[i];
			k++;
			i++;
		}
		else if (arr[i].len == arr[j].len)
		{
			if (ft_strcmp(arr[i].str, arr[j].str) < 0)
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

void	ft_msort(int start, int end, w_point *arr)
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
	int		n;
	int		i;
	int		j;
	w_point	*arr;

	scanf("%d", &n);

	arr = (w_point *)malloc(sizeof(w_point) * (n + 1));

	i = 0;
	while (i < n)
	{
		scanf("%s", arr[i].str);
		arr[i].len = ft_strlen(arr[i].str);
		i++;
	}

	ft_msort(0, n - 1, arr);

	i = 0;
	while (i < n)
	{
		if (i == 0)
			printf("%s\n", arr[i].str);
		else
		{
			if (ft_strcmp(arr[i - 1].str, arr[i].str) != 0)
			printf("%s\n", arr[i].str);
		}
		i++;
	}
	
	free(arr);
	return (0);
}	
