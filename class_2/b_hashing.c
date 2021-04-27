#include <stdio.h>

int	main(void)
{
	int		i;
	long long	j;
	int		l;
	long long	sum;
	char	str[50];

	scanf ("%d", &l);
	scanf ("%s", str);

	sum = 0;
	i = 0;
	j = 1;
	while (i < l)
	{
		sum = sum + (((str[i] - 96) * j) % 1234567891);
		j *= 31;
		j %= 1234567891;
		i++;
	}
	printf ("%lld\n", sum % 1234567891);

	return (0);
}
