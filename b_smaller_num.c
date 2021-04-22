#include <stdio.h>

int	main(void)
{
	int	n;
	int	m;
	int	num;
	int	i;

	scanf("%d %d", &n, &m);

	i = 0;
	while (i < n)
	{
		scanf("%d", &num);
		if (num < m)
			printf("%d ",num);
		i++;
	}
	return (0);
}
