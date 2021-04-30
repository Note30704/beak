#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	last;

	scanf("%d", &n);

	if (n == 1)
		printf("1\n");
	if (n == 2)
		printf ("2\n");
	if (n > 2)
	{
		last = 2;
		i = 3;
		while (i < n)
		{
			if (i > last)
				last += 2;
			else
				last = 2;
			i++;
		}
		printf ("%d\n", last); 
	}
	return (0);
}
