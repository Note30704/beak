#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	cnt;
	int	ans;

	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
			return (0);	
		
		cnt = n;
		i = 0;
		ans = 1;
		while (cnt)
		{
			ans = ans + 2 * i;
			i++;
			cnt--;
		}
		printf("%d => %d\n", n, ans);
	}
	return (0);
}
