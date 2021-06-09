#include <stdio.h>

void	print_queue(int i, int N, int M, int count, int *queue)
{
	int	max;

	if (queue[M] == 0)
		return ;
	max = 0;
	while (i < N)
	{
		if (queue[i] > max)
			max = queue[i];
		i++;
	}
	i = 0;
	while (queue[i] != max)
		i++;
	queue[i] = 0;
	count++;
	print_queue(i, N, M, count, queue);
}

int	main(void)
{
	int	i;
	int	T;
	int	N;
	int	M;
	int	count;
	int	queue[100];

	scanf("%d", &T);
	while (T)
	{
		scanf("%d %d", &N, &M);
		count = 0;
		i = 0;
		while (i < N)
		{
			scanf("%d", &queue[i]);
			i++;
		}
		i = 0;
		print_queue(i, N, M, count, queue);
		T--;
	}
	return (0);
}
