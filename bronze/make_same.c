#include <stdio.h>

long long	ft_abs(long long num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}

int	main(void)
{
	long long	i;
	long long	a;
	long long	b;
	long long	c;
	long long	d;
	long long	tmp;

	while (1)
	{
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		
		if (a == 0 && b == 0 && c == 0 && d == 0)
			return (0);
		i = 0;
		while (a != b || b != c || c != d || d != a)
		{
			tmp = a;
			a = ft_abs(a - b);
			b = ft_abs(b - c);
			c = ft_abs(c - d);
			d = ft_abs(d - tmp);
			i++;
		}
		printf("%lld\n", i);
	}
	return (0);
}
