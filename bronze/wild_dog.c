#include <stdio.h>

int	main(void)
{
	int	i;
	int	a;
	int	b;
	int	c;
	int	d;
	int	p[3];
	int	cnt;

	scanf("%d %d %d %d",&a, &b, &c, &d);
	scanf("%d %d %d", &p[0], &p[1], &p[2]);

	i = 0;
	while (i < 3)
	{
		cnt = 0;
		if (p[i] % (a + b) < a + 1)
			cnt++;
		if (p[i] % (a + b) == 0)
			cnt--;
		if (p[i] % (c + d) < c + 1) 
			cnt++;
		if (p[i] % (c + d) == 0)
			cnt--;
		i++;
		printf("%d\n", cnt);
	}
	return (0);
}
