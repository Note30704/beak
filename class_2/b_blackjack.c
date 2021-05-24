#include <stdio.h>

void	find_blackjack(int n, int m, int *card)
{
	int	i;
	int	j;
	int	k;
	int	max;

	max = 0;
	i = 0;
	while (i < n - 2)
	{
		j = i + 1;
		while (j < n - 1)
		{
			k = j + 1;
			while (k < n)
			{
				if (card[i] + card[j] + card[k] <= m)
				{
					if (max < card[i] + card[j] + card[k])
						max = card[i] + card[j] + card[k];
				}
				k++;
			}
			j++;
		}
		i++;
	}
	printf("%d", max);
}

void	ft_qsort(int start, int end, int *card)
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
		while (card[i] <= card[key])
			i++;
		while (card[j] > card[key] && j > start)
			j--;
		if (i > j)
		{
			tmp = card[j];
			card[j] = card[key];
			card[key] = tmp;
		}
		else
		{
			tmp = card[j];
			card[j] = card[i];
			card[i] = tmp;
		}
	}
	ft_qsort(start, j - 1, card);
	ft_qsort(j + 1, end, card);
}

int		main(void)
{
	int	i;
	int	n;
	int	m;
	int	sum;
	int	card[100];

	scanf("%d %d", &n, &m);
	i = 0;
	while (i < n)
	{
		scanf("%d", &card[i]);
		i++;
	}
	ft_qsort(0, n - 1, card);
	find_blackjack(n, m, card);
	return (0);
}
