#include <stdio.h>

int	main(void)
{
	int	i;
	int	d;
	int	last;
	int	a[11];
	int	b[11];

	i = 0;
	while (i < 10)
	{
		scanf("%d", &a[i]);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		scanf("%d", &b[i]);
		i++;
	}
	a[10] = 0;
	b[10] = 0;
	last = 0;
	d = 0;
	i = 0;
	while (i < 10)
	{
		if (a[i] > b[i])
		{
			a[10] = a[10] + 3;
			last = 1;
		}
		else if (a[i] < b[i])
		{
			b[10] = b[10] + 3;
			last = 2;
		}
		else
		{
			a[10]++;
			b[10]++;
			d++;
		}
		i++;
	}
	printf("%d %d\n", a[10], b[10]);
	if (a[10] < b[10])
		printf("B");
	else if (a[10] > b[10])
		printf("A");
	else
	{
		if (last == 1)
			printf("A");
		else if (last == 2)
			printf("B");
		else
			printf("D");
	}
	return (0);
}
