#include <stdio.h>

int	main(void)
{
	int	i;
	int	cnt;
	int	same;
	int	dp[4];

	i = 0;
	while (i < 4)
	{
		scanf("%d", &dp[i]);
		i++;
	}
	cnt = 3;
	same = 0;
	i = 0;
	while (i < 3)
	{
		if (dp[i] < dp[i + 1])
			cnt--;
		else if (dp[i] > dp[i + 1])
			cnt++;
		else
			same++;
		i++;
	}
	if (same == 3 && cnt == 3)
		printf("Fish At Constant Depth");
	else if (cnt == 0)
		printf("Fish Rising");
	else if (cnt == 6)
		printf("Fish Diving");
	else
		printf("No Fish");
	return (0);
}
