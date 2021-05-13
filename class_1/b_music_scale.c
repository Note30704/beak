#include <stdio.h>

int	main(void)
{
	int	i;
	int	num[8];

	i = 0;
	while (i < 8)
	{
		scanf("%d", &num[i]);
		i++;
	}
	if (num[0] == 1)
	{
		i = 1;
		while (i <= 8)
		{
			if (num[i - 1] != i)
			{
				printf("mixed\n");
				return (0);
			}
			i++;
		}
		printf("ascending\n");
	}
	else if (num[0] == 8)
	{
		i = 8;
		while (i > 0)
		{
			if (num[8 - i] != i)
			{
				printf("mixed\n");
				return (0);
			}
			i--;
		}
		printf("descending\n");
	}
	else
		printf("mixed\n");
	return (0);
}
