#include <stdio.h>

int	main(void)
{
	int	i;
	int	a;
	int	b;
	int	c;
	int	n;

	scanf("%d", &n);	//45까지만 가능

	a = 0;
	b = 1;
	i = 0;
	if (n > 2)
	{
		while (n)
		{
			c = a;
			a = b;
			b = c + b;
			n--;
		}
		printf("%d", a);
	}
	else if(n == 2)
		printf("1");
	else if(n == 1)
		printf("1");
	else if (n == 0)
		printf("0");
	return (0);
}
