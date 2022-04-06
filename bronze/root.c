#include <stdio.h>

int	ft_abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}

int	main(void)
{
	int	i;
	int	j;
	int	b;
	int	n;
	int	ans[10000000] = {0,};									//최대한 크게 잡음

	while (1)
	{
		scanf("%d %d", &b, &n);

		if (b == 0 && n == 0)
			return (0);
		i = 1;
		while (ans[i - 1] < b)									//ans[i - 1]이 b보다 작을때까지
		{
			ans[i] = 1;											//1로 초기화
			j = 1;
			while (j <= n)
			{
				ans[i] = ans[i] * i;							//제곱근 구하기
				j++;
			}
			i++;
		}
		if (ft_abs(b - ans[i - 1]) < ft_abs(b - ans[i - 2]))	//차이
			printf("%d\n", i - 1);
		else
			printf("%d\n", i - 2);
	}
	return (0);
}
