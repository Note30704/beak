#include <stdio.h>

int	ft_abs(int a, int b)
{
	if (a < b)
		return (b - a);
	else
		return (a - b);
}

int	main(void)
{
	int	cnt1;
	int	cnt2;
	int	ans1;
	int	ans2;
	int	b[2];
	int	d[2];
	int	j[2];

	scanf("%d %d", &b[0], &b[1]);
	scanf("%d %d", &d[0], &d[1]);
	scanf("%d %d", &j[0], &j[1]);

	cnt1 = ft_abs(b[0], j[0]);
	cnt2 = ft_abs(b[1], j[1]);
	ans1 = cnt1 < cnt2 ? cnt2 : cnt1;

	cnt1 = ft_abs(d[0], j[0]);
	cnt2 = ft_abs(d[1], j[1]);
	ans2 = cnt1 + cnt2;
	if (ans1 < ans2)
		printf("bessie");
	else if (ans1 > ans2)
		printf("daisy");
	else
		printf("tie");
	return (0);
}
