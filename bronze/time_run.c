#include <stdio.h>

int	main(void)
{
	int	t1;
	int	t2;
	int	m1;
	int	m2;
	int	ans;

	scanf("%d %d %d %d", &t1, &m1, &t2, &m2);

	if (m2 < m1)
	{
		m2 = m2 + 60;
		t2--;
	}
	if (t2 < t1)
		t2 = t2 + 24;
	ans = (t2 - t1) * 60 + m2 - m1;
	printf("%d %d", ans, ans / 30);
	return (0);
}
