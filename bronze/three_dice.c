#include <stdio.h>

int	main(void)
{
	int	dice[3];
	int	i;
	int	j;
	int	big;
	int	same;
	int	flag;

	scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

	big = 0;
	flag = 0;
	same = 0;
	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			if (dice[i] == dice[j])
			{
				same = dice[i];
				flag++;
			}
			j++;
		}
		if (big < dice[i])
			big = dice[i];
		i++;
	}
	if (flag == 0)
		printf("%d", big * 100);
	if (flag == 1)
		printf("%d", 1000 + same * 100);
	if (flag > 1)
		printf("%d" , 10000 + dice[0] * 1000);
	return (0);
}
