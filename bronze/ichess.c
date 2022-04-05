#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	k;
	int	b;
	int	w;
	int	cnt_b;
	int	cnt_w;
	int	min;
	int	max;

	scanf("%d %d", &b, &w);

	max = b < w ? w : b;
	min = b > w ? w : b;
		
	if (b == 0 && w == 0)					// 만들 수 없을 때
		printf("Impossible");
	else if (min == 0 && max > 0)			// 한쪽이 0일 경우
		printf("1");
	else
	{
		i = 0;
		j = 0;
		k = 0;
		cnt_b = 0;
		cnt_w = 0;
		while (cnt_b < min)					// 체스판 정사각형 예
		{
			i++;
			if (i % 2 == 0)
				j++;
			if (i % 2 != 0)
				k++;
			cnt_b = cnt_b + 2 * j;
			cnt_w = cnt_w + 2 * k - 1;
		}
		if (cnt_b <= min && cnt_w <= max)
			printf("%d", i);
		else
			printf("%d", i - 1);
	}
	return (0);
}
