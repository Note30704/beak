#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	double	ans[2];
	double	r[100];

	scanf("%d", &n);

	ans[0] = 0;
	i = 0;
	while (i < n)
	{
		scanf("%lf", &r[i]);
		ans[0] = ans[0] + r[i];
		i++;
	}
	ans[0] = ans[0] / n;
	ans[1] = 0;
	i = 0;
	while (i < n)
	{
		ans[1] = ans[1] + r[i] / n;
		i++;
	}
	if (n != 0)
		printf("%0.2f", ans[0] / ans[1]);
	else
		printf("divide by zero");
	return (0);
}
