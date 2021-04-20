#include <stdio.h>

int	len_str(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	main(void)
{
	int		n;
	int		i;
	int		j;
	int		count;
	int		len;
	int		c_sum;
	char	arr[80];

	scanf("%d", &n);
	
	i = 0;
	while (i < n)
	{
		c_sum = 0;
		count = 1;
		scanf("%s", arr);
		len = len_str(arr);
		j = 0;
		while (j < len)
		{
			if (arr[j] == 'O')
			{
				c_sum += count;
				count++;
			}
			else
				count = 1;
			j++;
		}
		printf("%d\n", c_sum);
		i++;
	}

	return (0);
}
