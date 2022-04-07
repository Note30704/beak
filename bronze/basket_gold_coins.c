#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	w;
	int	d;
	int	coin;
	int	cnt;
	int	cnt_n;
	int	cnt_nw;

	while (scanf("%d %d %d %d", &n, &w, &d, &coin) != EOF)
	{
		cnt_n = 0;
		i = 1;
		while (i < n)						//n-1까지 갯수
		{
			cnt_n = cnt_n + i;
			i++;
		}
		cnt = n;
		cnt_nw = cnt_n * w;					//n-1 * w 갯수
		i = 1;
		while (i < n)
		{
			if (cnt_nw - coin == d * i)		//몇번째가 다른지
				cnt = i;
			i++;
			}
		if (cnt < n)
			printf("%d\n", cnt);
		else								//n-1범위가 아니면 마지막
			printf("%d\n", n);
	}
	return (0);
}
