#include <stdio.h>

int	g_box[1000] = {0,};
int	g_i = 0;
int	g_j = 0;

void	pop(int num)
{
	g_box[g_j] = num;
	g_j++;
}

int	main(void)
{
	int	i;
	int	N;
	int	K;
	int	yosepuse[1000] = {0,};
	int	count;

	scanf("%d %d", &N, &K);
	i = 0;
	while (i < N)
	{
		yosepuse[i] = i + 1;
		i++;
	}
	count = 0;
	i = 1;
	while (count != N)
	{
		if (i % K == 0)
		{
			pop(yosepuse[i - 1]);
			count++;
		}
		else
		{
			yosepuse[N + g_i] = yosepuse[i - 1];
			g_i++;
		}
		i++;
	}
	printf("<");
	i = 0;
	while (i < N - 1)
	{
		printf("%d, ", g_box[i]);
		i++;
	}
	printf("%d>", g_box[i]);
	return (0);
}
