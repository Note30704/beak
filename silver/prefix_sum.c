#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	i;
	int	n;
	int	m;
	int	num;
	int	ans;
	int	sum[100002] = {0, };

	scanf("%d %d", &n, &m);

	i = 1;
	while (i <= n)
	{
		scanf("%d", &num);
	
		sum[i] = sum[i - 1] + num;		//앞에 들어온 수 모두 더한 값
		i++;
	}
	while (m)
	{
		scanf("%d %d", &a, &b);

		ans = sum[b] - sum[a - 1];		//b번째 합 - (a - 1)번째 합을 빼면 구간 합
		m--;
	}
	return (0);
}
