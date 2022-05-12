#include <stdio.h>

int	main(void)
{
	int	i;
	int	k;
	int	n;
	int	m;
	int	total;

	scanf("%d", &k);
	
	while (k)
	{
		scanf("%d %d", &n, &m);

		total = 1;
		i = 1;
		while (i <= n)				//팩토리얼 바로 계산
		{
			total = total * (m - i + 1);
			total = total / i;
			i++;
		}
		printf("%d\n", total);
		k--;
	}
	return (0);
}
