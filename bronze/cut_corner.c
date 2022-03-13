#include <stdio.h>

double	ft_sqrt(double a)
{
	double	s;
	double	t;

	t = 0;
	s = a / 2;
	while (s != t)
	{
		t = s;
		s = ((a / t) + t) / 2;
	}
	return (s);
}

int	main(void)
{
	double	w;
	double	h;
	double	ans;

	scanf("%lf %lf", &w, &h);

	ans = w * w + h * h;
	printf("%0.6lf", w + h - ft_sqrt(ans));
	return (0);
}
