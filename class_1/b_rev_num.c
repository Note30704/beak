#include <stdio.h>

void	ft_recursive(int a, int b)
{
	if (a == 0 || b == 0)
		return ;

	if (a % 10 > b % 10)
	{
		while(a)
		{
			printf("%d", a % 10);
			a = a / 10;
		}
	}
	else if (a % 10 < b % 10)
	{
		while (b)
		{
			printf("%d", b % 10);
			b = b / 10;
		}
	}
	else
		printf ("%d", a % 10);
		ft_recursive(a / 10, b / 10);
}

int	main(void)
{
	int	a;
	int	b;
	
	scanf("%d %d", &a, &b);
	ft_recursive(a, b);
	return (0);
}
