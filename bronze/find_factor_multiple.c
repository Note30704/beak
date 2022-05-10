#include <stdio.h>


int	ft_checker(int a, int b)
{
	int	i;

	i = 0;
	while (i < 10000)
	{
		if (a * i == b)			//a가 b의 약수
			return (1);
		else if (b * i == a)	//a가 b의 배수
			return (2);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	a;
	int	b;
	int	check;

	while (1)
	{
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
			return (0);
		
		check = ft_checker(a, b);
		if (check == 0)
			printf("neither\n");
		else if (check == 1)
			printf("factor\n");
		else
			printf("multiple\n");
	}
	return (0);
}
