#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	cnt;
	int	ans;

	scanf("%d", &n);

	cnt = 0;
	i = 1;
	while (i <= n)
	{
		cnt = cnt + i;
		i++;
	}
	ans = (n + 2) * cnt;
	printf("%d" ,ans);
	return (0);
}
