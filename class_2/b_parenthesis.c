#include <stdio.h>

int	ft_strlen(char *VPS)
{
	int	len;

	len = 0;
	while (*VPS)
	{
		VPS++;
		len++;
	}
	return (len);
}

int	ft_checker(int len, char *VPS)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < len)
	{
		if (VPS[i] == '(')
			count++;
		else
			count--;
		if (count < 0)
			return (0);
		i++;
	}
	if (count != 0)
		return (0);
	else
		return (1);
}


int	main(void)
{
	int		n;
	int		len;
	int		ans;
	char	VPS[51];

	scanf("%d", &n);
	
	while (n)
	{
		scanf("%s", VPS);
		
		len = ft_strlen(VPS);
		ans = ft_checker(len, VPS);
		if (ans)
			printf("YES\n");
		else
			printf("NO\n");
		n--;
	}
	return(0);
}
