#include <stdio.h>

int	main(void)
{
	int		n;
	int		i;
	int		sum;
	char	arr[81];

	scanf("%d", &n);
	scanf("%s", arr);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + arr[i] - '0';
		i++;
	}
	printf("%d", sum);

	return (0);
}
