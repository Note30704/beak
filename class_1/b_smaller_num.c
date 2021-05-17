#include <stdio.h>

int	main(void)
{
	int	n;
	int	x;
	int	num;

	scanf("%d %d", &n, &x);

	while (n)
	{
		scanf("%d", &num);
		
		if (num < x)
			printf("%d ", num);
		n--;
	}
	return(0);
}
