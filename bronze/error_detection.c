#include <stdio.h>

int	main(void)
{
	int	i;
	int	k;
	int	num;
	int	check;
	int	cnt;
	int	b[16];

	scanf("%d", &k);

	while (k)
	{
		scanf("%d %d", &num, &check);
	
		cnt = 0;
		i = 15;
		while (i >= 0)				//이진수만들기
		{
			b[i] = num % 2;			//이진수 저장
			num = num / 2;
			if (b[i] == 1)			//1인 이진수 count
				cnt++;
			i--;
		}
		if (check == (cnt % 2))		//1인 이진수와 check 같은 경우
			printf("Valid\n");
		else
			printf("Corrupt\n");
		k--;
	}
	return (0);
}
