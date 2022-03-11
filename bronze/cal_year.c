#include <stdio.h>

int	main(void)
{
	int	man;
	int	sae;
	int	youn;
	int	b[3];
	int	s[3];

	scanf("%d %d %d", &b[0], &b[1], &b[2]);
	scanf("%d %d %d", &s[0], &s[1], &s[2]);

	if (s[0] > b[0])
	{
		if (s[1] > b[1])
			man = s[0] - b[0];
		else if (s[1] < b[1])
			man = s[0] - b[0] - 1;
		else
		{
			if (s[2] >= b[2])
				man = s[0] - b[0];
			else
				man = s[0] - b[0] - 1;
		}
	}
	else
		man = s[0] - b[0];
	sae = s[0] - b[0] + 1;
	youn = s[0] - b[0];
	printf("%d\n", man);
	printf("%d\n", sae);
	printf("%d\n", youn);
	return (0);
}
