#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	k;
	int	t;

	scanf("%d", &t);
	
	i = t / 300;
	t = t % 300;
	
	j = t / 60;
	t = t % 60;

	k = t / 10;
	t = t % 10;

	if (t == 0)
		printf("%d %d %d", i, j , k);
	else
		printf("-1");
	return (0);
}
