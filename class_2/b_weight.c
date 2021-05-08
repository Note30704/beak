#include <stdio.h>

typedef struct	c_point
{
	int	x;
	int	y;
	int	num;
}				h_point;

int	main(void)
{
	int	n;
	int	i;
	int	j;
	h_point	human[50];

	scanf("%d", &n);

	i = 0;
	while (i < n)
	{
		scanf("%d %d", &human[i].x, &human[i].y);
		human[i].num = 1;
		i++;
	}
	if (n == 1)
		printf("1");
	else
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if ((human[i].x < human[j].x) && (human[i].y < human[j].y ))
					human[i].num++;
				j++;
			}
			printf("%d ", human[i].num);
			i++;
		}
	}
	return (0);
}
