#include <stdio.h>

void	ft_bsort(int *num, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while(i < len)
	{
		j = 0;
		while (j < len - i)
		{
			if (num[j] > num[j + 1])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	i;
	int	j;
	int	len;
	int	n;
	int	target_a;
	int	target_b;
	int	cnt;
	int	num[50];

	scanf("%d", &len);

	i = 0;
	while (i < len)
	{
		scanf("%d", &num[i]);
		i++;
	}

	scanf("%d", &n);

	ft_bsort(num, len - 1);				//버블정렬
	target_a = 0;				//초기화(아주 중요)
	target_b = 0;				//초기화(아주 중요)
	i = len;							//정렬 속 n보다 큰 다음 수
	while (i)
	{
		if (num[i - 1] == n)			//n과 같은 수 있을 시
		{
			printf("0");
			return (0);
		}
		if (num[i - 1] > n)
			target_b = num[i - 1];
		i--;
	}
	i = 0;							//정렬 속 n보다 작은 다음 수
	while (i < len)
	{
		if (num[i] < n)
			target_a = num[i];
		i++;
	}
	cnt = 0;
	i = target_a + 1;			//작은 다음 수보다 큰 수로 A자리 채우기
	while (i <= n)
	{
		j = i + 1;					// n부터 n보다 큰 수까지 B자리 채우기
		while (j < target_b) 
		{
			if (j >= n)
				cnt++;
			j++;
		}
		i++;
	}
	printf("%d", cnt);
	return (0);
}
