#include <stdio.h>

double	ft_sqrt(double a)
{
	double	s;
	double	t;

	s = a / 2;
	t = 0;
	while (s != t)
	{
		t = s;
		s = ((a / t) + t) / 2;
	}
	return (s);
}

int	main(void)
{
	double	a;
	double	ans;

	scanf("%lf", &a);

	ans = ft_sqrt(a);
	ans = ans * ft_sqrt(3.14159265) * 2;
	printf("%0.6lf", ans);
	return (0);
}
