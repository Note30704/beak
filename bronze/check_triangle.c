#include <stdio.h>

void	ft_bsort(int *s)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3 - i)
		{
			if (s[j] > s[j + 1])
			{
				tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	i;
	int	s[3];

	while (1)
	{
		scanf("%d %d %d", &s[0], &s[1], &s[2]);

		if (s[0] == 0 && s[1] == 0 && s[2] == 0)
			return (0);
		ft_bsort(s);												//버블정렬
		if (s[2] >= s[0] + s[1])									//삼각형불가능
			printf("Invalid\n");
		else if (s[0] == s[1] && s[1] == s[2])						//정삼각형
			printf("Equilateral\n");
		else if ((s[0] == s[1] || s[1] == s[2]) && s[0] != s[2])	//이등변 삼각형
			printf("Isosceles\n");
		else														//일반삼각형
			printf("Scalene\n");
	}
	return (0);
}
