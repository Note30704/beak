#include <stdio.h>

int	main(void)
{
	int	n;
	int	m;
	int	k;
	int	min1;
	int	min2;

	scanf("%d %d %d", &n, &m, &k);
	
	min1 = m < k ? m : k;
	min2 = n - m < n - k ? n - m : n - k;
	printf("%d", min1 + min2);
	return (0);
}
