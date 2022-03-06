#include <stdio.h>

int	main(void)
{
	int	i;
	int	sum;
	int	t[2];
	int	st[3];
	int	end[3];

	scanf("%d : %d : %d", &st[0], &st[1], &st[2]);
	scanf("%d : %d : %d", &end[0], &end[1], &end[2]);
	
	t[0] = st[0] * 3600 + st[1] * 60 + st[2];
	t[1] = end[0] * 3600 + end[1] * 60 + end[2];
	if (t[0] > t[1])
		sum = t[1] - t[0] + 3600 * 24;
	else
		sum = t[1] - t[0];
	printf("%d", sum);
	return (0);
}
