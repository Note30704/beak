#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	j;
	int	res;
	int	count;
	int	tmp[10];

	i = 0;
	while (i < 10)
	{
		scanf("%d", &n);
		tmp[i] = n % 42;
		i++;
	}
	res = 0;
	i = 0;
	while (i < 10)
	{
		count = 0;
		j = 0;
		while (j < i)
		{
			if (tmp[i] == tmp[j])
				count++;
			j++;
		}
		if (count == 0)
			res++;
		i++;
	}
	printf ("%d", res);
	return (0);
}
