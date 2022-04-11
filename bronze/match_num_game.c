#include <stdio.h>

int	main(void)
{
	int	i;
	int	n0;
	int	n1;
	int	n2;
	int	n3;
	int	n4;
	int	flag;

	i = 1;
	while(1)
	{
		scanf("%d", &n0);

		if (n0 == 0)
			return (0);
		flag = 0;							//홀짝구별
		n1 = 3 * n0;
		if (n1 % 2 == 0)
		{
			n2 = (n1 + 1) / 2;
			flag = 1;
		}
		else
			n2 = n1 / 2;
		n3 = 3 * n2;
		n4 = n3 / 9;
		if (flag == 1)
			printf("%d. even %d\n", i, n4);
		else
			printf("%d. odd %d\n", i, n4);
		i++;
	}
	return (0);
}
