#include <stdio.h>

int	ft_check(int *t)
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			if (t[i] == t[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	int	i;
	int	p;
	int	ck;
	int	t[3];

	p = 0;
	i = 0;
	while (i < 3)
	{
		scanf("%d", &t[i]);
		p = p + t[i];
		i++;
	}
	ck = ft_check(t);

	if (t[0] == 60 && t[1] == 60 && t[2] == 60)
		printf("Equilateral");
	else if (ck && p == 180)
		printf("Isosceles");
	else if (!ck && p == 180)
		printf("Scalene");
	else if (p != 180)
		printf("Error");
	return (0);
}
