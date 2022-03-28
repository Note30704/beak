#include <stdio.h>

int	main(void)
{
	double	won;
	double	gram;
	double	c_won;
	double	c_gram;
	double	low;
	int		n;

	scanf("%lf %lf", &won, &gram);
	scanf("%d", &n);

	low = 1000 / gram * won;
	while (n)
	{
		scanf("%lf %lf", &c_won, &c_gram);

		c_gram = 1000 / c_gram * c_won;
		if (low > c_gram)
			low = c_gram;
		n--;
	}
	printf("%0.2lf", low);
	return (0);
}
