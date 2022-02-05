#include <stdio.h>

int	main(void)
{
	int	i;
	int	time;
	int	ans;

	i = 0;
	ans = 0;
	while (i < 4)
	{
		scanf("%d", &time);
		ans = ans + time;
		i++;
	}
	printf("%d\n%d", ans / 60, ans % 60);
	return (0);
}
