#include <stdio.h>
#include <stdlib.h>

int	check_palin(int	len, char *arr)
{
	int	i;
	
	i = 0;
	while (i < len)
	{
		if (arr[i] != arr[len - 1])
			return (0);
		i++;
		len--;
	}
	return (1);
}

int	str_len(char *str)
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
	char	*arr;
	int		i;
	int		len;
	int		check;

	arr = (char *)malloc(sizeof(*arr) + 1);

	while (1)
	{
		scanf ("%s", arr);

		if (arr[0] == '0')
			break;
		len = str_len(arr);
		i = 0;
		check = check_palin(len, arr);
		if (check == 1)
			printf ("yes\n");
		else
			printf ("no\n");
	}
	free(arr);
	return (0);
}
