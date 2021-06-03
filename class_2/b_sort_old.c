#include <stdio.h>
#include <stdlib.h>

typedef	struct	c_point
{
	int		age;
	char	name[101];
	int		num;
}				a_point;

a_point	g_box[100000];

void	ft_merge(int start, int mid, int end, a_point *human)
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
		if (human[i].age < human[j].age)
		{
			g_box[k] = human[i];
			k++;
			i++;
		}
		else if (human[i].age == human[j].age)
		{
			if (human[i].num < human[j].num)
			{
				g_box[k] = human[i];
				k++;
				i++;
			}
			else
			{
				g_box[k] = human[j];
				k++;
				j++;
			}
		}
		else
		{
			g_box[k] = human[j];
			k++;
			j++;
		}
	}
	if (i > mid)
	{
		l = j;
		while (l <= end)
		{
			g_box[k] = human[l];
			k++;
			l++;
		}
	}
	else
	{
		l = i;
		while (l <= mid)
		{
			g_box[k] = human[l];
			k++;
			l++;
		}
	}
	i = start;
	while (i <= end)
	{
		human[i] = g_box[i];
		i++;
	}
}

void	ft_msort(int start, int end, a_point *human)
{
	int	mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		ft_msort(start, mid, human);
		ft_msort(mid + 1, end, human);
		ft_merge(start, mid, end, human);
	}
}

int	main(void)
{
	int		i;
	int		n;
	a_point	*human;

	scanf("%d", &n);
	human = (a_point *)malloc(sizeof(a_point) * n);
	i = 0;
	while (i < n)
	{
		scanf("%d %s", &human[i].age, human[i].name);
		human[i].num = i;
		i++;
	}
	ft_msort(0, n - 1, human);
	i = 0;
	while (i < n)
	{
		printf("%d %s\n", human[i].age, human[i].name);
		i++;
	}
	return (0);
}
