#include <stdio.h>

int	main(void)
{
	int		i;
	int		n;
	int		sum;
	char	num[101];

	scanf("%d", &n);
	scanf("%s", num);

	sum = 0;
	while (n)
	{
		sum = sum + num[n - 1] - '0';
		n--;
	}
	printf("%d", sum);
	return (0);
}
