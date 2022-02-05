#include <stdio.h>

int	main(void)
{
	int	i;
	int	L;
	int	P;
	int	LP;
	int	article[5];

	scanf("%d %d", &L, &P);
	
	i = 0;
	while (i < 5)
	{
		scanf("%d", &article[i]);
		i++;
	}

	LP = L * P;
	i = 0;
	while (i < 5)
	{
		printf("%d ", article[i] - LP);
		i++;
	}
	return (0);
}
