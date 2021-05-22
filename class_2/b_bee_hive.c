#include <stdio.h>

int	main(void)
{
	int	n;
	int	room;
	int	count;

	scanf("%d", &n);

	room= 1;
	count = 1;
	while (room < n)
	{
		room = room + (count * 6);
		count++;
	}
	printf("%d", count);
	return (0);
}
