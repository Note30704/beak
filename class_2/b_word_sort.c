#include <stdio.h>

typedef	struct
{
	char	str[51];
	int		len;
}				a_point;

a_point	g_box[20000];

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int		ft_strcmp(char *s1, char *s2)
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

void	ft_merge(int start, int mid, int end, a_point *str)
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
		if (str[i].len < str[j].len)
		{
			g_box[k] = str[i];
			k++;
			i++;
		}
		else if (str[i].len == str[j].len)
		{
			if (ft_strcmp(str[i].str, str[j].str) < 0)
			{
				g_box[k] = str[i];
				k++;
				i++;
			}
			else
			{
				g_box[k] = str[j];
				k++;
				j++;
			}
		}
		else
		{
			g_box[k] = str[j];
			k++;
			j++;
		}
	}
	if (i > mid)
	{
		l = j;
		while (l <= end)
		{
			g_box[k] = str[l];
			k++;
			l++;
		}
	}
	else
	{
		l = i;
		while (l <= mid)
		{
			g_box[k] = str[l];
			k++;
			l++;
		}
	}
	i = start;
	while (i <= end)
	{
		str[i] = g_box[i];
		i++;
	}
}

void	ft_msort(int start, int end, a_point *str)
{
	int	mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		ft_msort(start, mid, str);
		ft_msort(mid + 1, end, str);
		ft_merge(start, mid, end, str);
	}
}

int		main(void)
{
	int		i;
	int		n;
	a_point	str[20000];

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%s", str[i].str);
		str[i].len = ft_strlen(str[i].str);
		i++;
	}
	ft_msort(0, n - 1, str);
	printf("%s\n", str[0].str);
	i = 1;
	while (i < n)
	{
		if (ft_strcmp(str[i - 1].str, str[i].str) != 0)
			printf("%s\n", str[i].str);
		i++;
	}
	return (0);
}
