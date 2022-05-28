#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	k;
	int	ans;
	int	check[10] = {0,};
	int	coin[10];

	scanf("%d %d", &n, &k);

	i = 0;
	while (i < n)
	{
		scanf("%d", &coin[i]);
		i++;
	}
	i = n - 1;			//큰값부터 빼기
	while (k)
	{
		if (coin[i] <= k)		//최소값구하기 핵심if
		{
			k = k - coin[i];	//가치(k) 줄이기
			check[i]++;			//사용한 돈 갯수 카운트
		}
		else
			i--;
	}
	ans = 0;
	i = 0;
	while (i < 10)
	{
		ans = ans + check[i];
		i++;
	}
	printf("%d", ans);
	return (0);
}
