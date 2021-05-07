#include <stdio.h>
#include <stdlib.h>

typedef	struct	c_point
{
	int	old;
	int	num;
	char str[101];
}				n_point;

n_point	g_box[100000];

void	ft_merge(int start, int mid, int end, n_point *name)
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
		if (name[i].old < name[j].old)
		{
			g_box[k] = name[i];
			k++;
			i++;
		}
		else
		{
			if (name[i].old == name[j].old)
			{
				if (name[i].num < name[j].num)
				{
					g_box[k] = name[i];
					k++;
					i++;
				}
				else
				{
					g_box[k] = name[j];
					k++;
					j++;
				}
			}
			else
			{
				g_box[k] = name[j];
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
			g_box[k] = name[l];
			k++;
			l++;
		}
	}
	else
	{
		l = i;
		while (l <= mid)
		{
			g_box[k] = name[l];
			k++;
			l++;
		}
	}
	i = start;
	while (i <= end)
	{
		name[i] = g_box[i];
		i++;
	}
}

void	ft_msort(int start, int end, n_point *name)
{
	int	mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		ft_msort(start, mid, name);
		ft_msort(mid + 1, end, name);
		ft_merge(start, mid, end, name);
	}
}

int	main(void)
{
	int	n;
	int	i;
	n_point	*name;

	scanf("%d", &n);

	name = (n_point *)calloc(sizeof(n_point), n);

	i = 0;
	while (i < n)
	{
		scanf("%d %s", &name[i].old, name[i].str);
		name[i].num = i;
		i++;
	}

	ft_msort(0, n - 1, name);

	i = 0;
	while (i < n)
	{
		printf("%d %s\n", name[i].old, name[i].str);
		i++;
	}
	free (name);
	return (0);
}
