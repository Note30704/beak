#include <stdio.h>

void	work_time(int *wt)
{
	int	i;
	int	h;
	int	m;
	int	s;
	
	if (wt[5] < wt[2])
	{
		wt[4] = wt[4] - 1;
		wt[5] = wt[5] + 60;
	}
	if (wt[4] < wt[1])
	{
		wt[3] = wt[3] - 1;
		wt[4] = wt[4] + 60;
	}
	printf("%d %d %d\n", wt[3] - wt[0], wt[4] - wt[1], wt[5] - wt[2]);
}

int	main(void)
{
	int	i;
	int	j;
	int	wt[3][6];

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 6)
		{
			scanf("%d", &wt[i][j]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 3)
	{
		work_time(wt[i]);
		i++;
	}
	return (0);
}
