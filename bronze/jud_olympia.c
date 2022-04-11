#include <stdio.h>

int	main(void)
{
	int		i;
	int		max;
	int		min;
	int		cnt;
	double	ans;
	int		s[6];

	while (1)
	{
		max = 0;
		min = 10;
		cnt = 0;
		ans = 0;
		i = 0;
		while (i < 6)
		{
			scanf("%d", &s[i]);
			if (s[i] == 0)
				cnt++;
			if (s[i] < min)
				min = s[i];
			if (s[i] > max)
				max = s[i];
			ans = ans + s[i];
			i++;
		}
		if (cnt == 6)
			return (0);
		printf("%g\n", ans = (ans - max - min) / 4);		//%g : 실수형자동표현
	}	
	return (0);
}
