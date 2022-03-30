#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	tmp;
	int	min;
	int	cnt;
	int	cal_1;
	int	cal_2;
	int	num[3];

	i = 0;
	while (i < 3)
	{
		scanf("%d", &num[i]);
		i++;
	}
	i = 0;							//정렬
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			if (num[i] > num[j])
			{
				tmp = num[j];
				num[j] = num[i];
				num[i] = tmp;
			}
			j++;
		}
		i++;
	}
	cal_1 = num[2] - num[1];
	cal_2 = num[1] - num[0];
	min = cal_1 > cal_2 ? cal_2 : cal_1;
	cnt = 0;
	i = 0;
	while (i < 2)
	{
		if (num[i] + min == num[i + 1])		//꽉찬 등차수열
			cnt++;
		else
		{
			if (num[i] + 2 * min == num[i + 1])	//빈 등차수열
				printf("%d", num[i] + min);
			else
				return (0);					//등차가 아닐경우
		}
		i++;
	}
	if (cnt == 2)						//꽉찬 등차수열 확인
		printf("%d", num[2] + min);
	return (0);
}
