#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		i;
	int		t;
	double	*cp;

	scanf("%d", &t);
	
	cp = (double *)malloc(sizeof(double) * t);
	i = 0;
	while (i < t)
	{
		scanf("%lf", &cp[i]);
		i++;
	}
	i = 0;
	while (i < t)
	{
		printf("$%0.2lf\n", cp[i] * 0.8);
		i++;
	}
	free(cp);
	return (0);
}
