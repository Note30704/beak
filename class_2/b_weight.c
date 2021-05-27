#include <stdio.h>

typedef	struct	c_point
{
	int	x;
	int	y;
}				w_point;

int	main(void)
{
	int	i;
	int	j;
	int	n;
	int	count;
	w_point	grade[50];

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d %d", &grade[i].x, &grade[i].y);
		i++;
	}
	i = 0;
	while (i < n)
	{
		count = 1;
		j = 0;
		while (j < n)
		{
			if (grade[i].x < grade[j].x && grade[i].y < grade[j].y)
				count++;
			j++;
		}
		printf("%d ", count);
		i++;
	}
	return (0);
}
