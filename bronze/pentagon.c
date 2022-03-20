#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	ans;

	scanf("%d", &n);

	ans = 5;
	i = 2;
	while (i <= n)
	{
		ans = (ans + (3 * i) + 1) % 45678;
		i++;
	}
	printf("%d", ans);
	return(0);
}
