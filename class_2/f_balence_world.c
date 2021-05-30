#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	ft_check_parenthesis(int len, char *save)
{
	int	i;
	int	j;
	int	a_count;
	int	b_count;

	a_count = 0;
	b_count = 0;
	i = 0;
	while (save[i])
	{
		if (save[i] == '(')
		{
			if (save[j] == ']')
				return (0);
			a_count++;
		}
		else if (save[i] == ')')
			a_count--;
		else if (save[i] == '[')
		{
			if (save[j] == ')')
				return (0);
			b_count++;
		}
		else if (save[i] == ']')
			b_count--;
		if (a_count < 0 || b_count < 0)
			return (0);
		i++;
	}
	if (a_count != 0 || b_count != 0)
		return (0);
	else
		return (1);
}

int	main(void)
{
	int		i;
	int		j;
	int		len;
	int		ans;
	char	save[102];
	char	str[101];

	while (gets(str))
	{
		if (str[0] == '.')
			return (0);
		else
		{
		ans = 0;
		len = ft_strlen(str);
		i = 0;
		j = 0;
		while (i < len)
		{
			if (str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']')
			{
				save[j] = str[i];
				j++;
			}
			i++;
		}
		ans = ft_check_parenthesis(j, save);
		if (ans == 1)
			printf("yes\n");
		else
			printf("no\n");
		}
	}
	return(0);
}
