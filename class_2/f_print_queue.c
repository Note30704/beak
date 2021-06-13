#include <stdio.h>

typedef	struct	c_point
{
	int	queue;
	int	count;
}				Q_point;

Q_point	g_box[100];

int	main(void)
{
	int		i;
	int		T;
	int		N;
	int		M;
	Q_point	p_q[10000];

	scanf("%d", &T);
	while (T)
	{
		scanf("%d %d", &N, &M);
		i = 0;
		while (i < N)
		{
			scanf("%d", &p_q[i].queue);
			p_q[i].count = i;
			i++;
		}
		i = 0;
		while (i < N)
		{
			printf("queue = %d\n	count = %d", p_q[i].queue, p_q[i].count);
			printf("\n");
			i++;
		}	

		printf("\n\n");
		i = 0;
		while (i < N)
		{
			printf("queue = %d\n	count = %d", p_q[i].queue, p_q[i].count);
			printf("\n");
			i++;
		}
		T--;

	}
	return (0);
}
