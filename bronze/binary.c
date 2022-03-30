#include <stdio.h>

int	main(void)
{
	int	i;
	int	t;
	int	n;
	int	bi[10000];


	scanf("%d", &t);

	while (t)
	{
		scanf("%d", &n);

		i = 0;
		while (n)
		{
			bi[i] = n % 2;
			n = n / 2;
			i++;
		}
		n = i;
		i = 0;
		while (i < n)
		{
			if (bi[i] == 1)
				printf("%d ", i);
			i++;
		}
		t--;
	}
	return (0);
}
