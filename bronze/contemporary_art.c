#include <stdio.h>

double	ft_sqrt(double a)
{
	double	s;
	double	t;

	s = 0;
	t = 0;

	s = a / 2;
	while (s != t)
	{
		t = s;
		s = ((a / t) + t) / 2;
		printf("t = %0.8lf s = %0.8lf\n", t, s);
	}
	return (s);
}

int	main(void)
{
	double	a;
	double	ans;

	scanf("%lf", &a);
	
	ans = ft_sqrt(a);
	printf("\n\n\n\n%0.8lf", ans * 4);
	return (0);
}
