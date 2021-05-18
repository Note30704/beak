#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	x;
	int	y;
	int	x1;
	int	visitor;

	scanf("%d", &n);

	i = 0;
	while (i < n)
	{	
		scanf("%d %d %d", &x, &y, &visitor);		
	
		x1 = x;
		if (visitor % x == 0)
			y = visitor / x;
		else
		{
			x = visitor % x1;
			y = visitor / x1 + 1;
		}
		printf("%d%02d\n", x, y);
		i++;
	}
	return(0);
}
