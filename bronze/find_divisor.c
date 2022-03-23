#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	k;
	int	cnt;

	scanf("%d %d", &n, &k);

	cnt = 0;
	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			cnt++;
			if (cnt == k)
				printf("%d", i);
		}
		i++;
	}
	if (cnt < k)
		printf("0");
	return (0);
}
