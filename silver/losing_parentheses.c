#include <stdio.h>

int	main(void)
{
	int		i;
	int		j;
	int		k;
	int		ans;
	int		num[25] = {0,};
	char	str[50];

	scanf("%s", str);
	
	i = 0;
	j = 0;
	while (str[i] != '-' && str[i])			//'-'전까지, 끝까지
	{
		if ('0' <= str[i] && str[i] <= '9')	
			num[j] = num[j] * 10 + str[i] - '0';
		else
			j++;				//숫자가 아닐 경우 저장기능
		i++;
	}
	k = j;						
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')	
			num[k] = num[k] * 10 + str[i] - '0';
		else
			k++;
		i++;
	}
	ans = 0;
	i = 0;
	while (i <= k)
	{
		if (i <= j)					//'+' 경우만 합치기
			ans = ans + num[i];
		else					//'-' 뒤로 다 합치기
			ans = ans - num[i];
		i++;
	}
	printf("%d", ans);
	return (0);
}
