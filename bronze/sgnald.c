#include <stdio.h>

int	main(void)
{
	int	a[3];
	int	c;
	int	s;
	int	i;
	int	low;

	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &c, &s);
	
	low = 2000;
	i = 0;
	while (i < 3)
	{
		if (low > a[i])
			low = a[i];
		i++;
	}
	if (c < s)
		printf("%d", low + c - 50);
	else
		printf("%d", low + s - 50);
	return (0);
}
