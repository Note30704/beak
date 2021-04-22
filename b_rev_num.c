#include <stdio.h>

void	swap_num(char *str)
{
	char	tmp;
	
	tmp = str[0];
	str[0] = str[2];
	str[2] = tmp;
}

int	main(void)
{
	int		i;
	char	arr[4];
	char	att[4];

	scanf("%s %s", arr, att);

	swap_num(arr);
	swap_num(att);
	i = 0;
	while (i < 3)
	{
		if (arr[i] < att[i])
		{
			printf ("%s", att);
			break;
		}
		else if (arr[i] > att[i])
		{
			printf ("%s", arr);
			break;
		}
			i++;
	}
	return (0);
}
