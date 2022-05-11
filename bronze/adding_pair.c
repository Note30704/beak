#include <stdio.h>

int	main(void)
{
	int	i;
	int	k;
	int	n;
	int	flag;

	scanf("%d", &k);
	
	while (k)
	{
		scanf("%d", &n);

		printf("Pairs for %d: ", n);
		i = 1;
		flag = 0;
		while (i < n - 1)
		{
			if (flag > 0)
				printf(", ");
			n--;
			printf("%d %d", i, n);
			i++;
			flag++;
		}
		printf("\n");
		k--;
	}
	return (0);
}
