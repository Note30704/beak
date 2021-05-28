#include <stdio.h>

int	find_parentheses(char *str)
{
	int	i;
	int	j;
	int	k;
	int	count;
	int	count2;

	i = 0;
	while (str[i])
	{
		if (str[i] == ')')
		{
			count = 0;
			count2 = 0;
			j = i - 1;
			while (str[j] != '(')
			{
				count++;
				j--;
			}
			k = i - 1;
			while (str[k] != '[')
			{
				count2++;
				k--;
			}
			if (count > count2)
				return (0);
		}
		if (str[i] == ']')
		{
			count = 0;
			count2 = 0;
			k = i - 1;
			while (str[k] != '[')
			{
				count2++;
				k--;
			}
			j = i - 1;
			while (str[j] != '(')
			{
				count++;
				j--;
			}
			if (count < count2)
				return (0);
		}

		i++;
	}

	return (1);	//문제 없으면 통과	
}

int	main(void)
{
	char	str[100];
	int		ans;

		scanf("%[^.]", str);
		ans = find_parentheses(str);
		
		if (ans == 1)
			printf("yes\n");
		else
			printf("no\n");
	return (0);
}
