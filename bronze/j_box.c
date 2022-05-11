#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		i;
	int		j;
	int		k;
	int		n;
	char	**box;

	scanf("%d", &k);
	
	while (k)
	{
		scanf("%d", &n);

		box = (char **)malloc(sizeof(char *) * n + 1);		//전체 박스 크기
		i = 0;
		while (i < n)
		{
			*box = (char *)malloc(sizeof(char) * n + 1);	//줄별 크기
			j = 0;
			while (j < n)
			{
				if (i == 0 || i == n - 1)			//위 아래 '#'
					printf("#");
				else if (j == 0 || j == n - 1)		//양 옆 '#'
					printf("#");
				else					//안쪽 'J'
					printf("J");
				j++;
			}
			printf("\n");
			i++;
		}
		printf("\n");
		k--;
	}
	free(box);
	return (0);
}
