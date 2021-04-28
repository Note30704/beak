#include <stdio.h>

int	main(void)
{
	long long	n;
	int	path;
	int	h_num;

	scanf ("%lld", &n);

	h_num = 1;
	path = 1;
	while (h_num < n)
	{
	 	h_num = h_num + (path * 6);
		path++;
	}
	printf ("%d", path);

	return (0);
}
