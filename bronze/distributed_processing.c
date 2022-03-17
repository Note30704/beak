#include <stdio.h>

int	main(void)
{
	int	i;
	int	t;
	int	a;
	int	b;
	int	ans;

	scanf("%d", &t);
	
	while (t)
	{
		scanf("%d %d", &a, &b);
	
		if (b == 0)
			printf("1\n");
		else
		{
			ans = a % 10;
			i = 1;
			while (i < b)
			{
				ans = (ans * a) % 10;
				i++;
			}
			if (ans == 0)
				printf("10\n");
			else
				printf("%d\n", ans);
		}
		t--;
	}
	return (0);
}
