#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	cnt;
	int	ans;
	int	ox[100];

	scanf("%d", &n);

	i = 0;
	while (i < 100)
	{
		if (i < n)
			scanf("%d", &ox[i]);
		else
			ox[i] = 3;
		i++;
	}
	ans = 0;
	cnt = 0;
	i = 0;
	while (i < 100)
	{
		if (ox[i] == 1)
			ans = ans + 1;
		if (ox[i] == 1 && ox[i + 1] == 1)
			cnt++;
		else
			cnt = 0;
		if (cnt > 0)
			ans = ans + cnt;
		i++;
	}
	printf("%d", ans);
	return (0);
}
