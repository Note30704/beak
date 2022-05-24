#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	int		i;
	int		m;
	int		x;
	int		s[20];
	char	str[7];

	scanf("%d", &m);

	while (m)
	{
		scanf("%s %d", str, &x);

		if (ft_strcmp("add", str) == 0)
			s[x - 1] = 1;
		else if (ft_strcmp("remove", str) == 0)
			s[x - 1] = 0;
		else if (ft_strcmp("check", str) == 0)
		{
			if (s[x - 1] == 1)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (ft_strcmp("toggle", str) == 0)
		{
			if (s[x - 1] == 1)
				s[x - 1] = 0;
			else
				s[x - 1] = 1;
		}
		else if (ft_strcmp("all", str) == 0)
		{
			i = 0;
			while (i < 20)
			{
				s[i] = 1;
				i++;
			}
		}
		else if (ft_strcmp("empty", str) == 0)
		{
			i = 0;
			while (i < 20)
			{
				s[i] = 0;
				i++;
			}
		}
		m--;
	}
	return (0);
}
