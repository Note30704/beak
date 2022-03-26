#include <stdio.h>

int	main(void)
{
	long long	i;
	long long	t;
	long long	n;
	long long	tmp;
	long long	ans;

	scanf("%lld", &t);

	while (t)
	{
		scanf("%lld", &n);

		ans = 0;
		i = 0;
		while (i < n)
		{
			scanf("%lld", &tmp);

			ans = ans + tmp % n;
			i++;
		}
		if (ans % n == 0)
			printf("YES\n");
		else
			printf("NO\n");
		t--;
	}
	return (0);
}
