#include <stdio.h>

int	main(void)
{
	int	i;
	int	ans;
	int	an;
	int	m[5];

	i = 0;
	while (i < 5)
	{
		scanf("%d", &m[i]);
		i++;
	}
	ans = 0;
	if (m[0] < 0)
		m[1]++;
	while (m[0] != m[1])
	{
		if (m[0] < 0)
			ans = ans + m[2];
		else if (m[0] == 0)
			ans = ans + m[3];
		else if (m[0] > 0)
			ans = ans + m[4];
		m[0]++;
	}
	printf("%d", ans);
	return (0);
}
