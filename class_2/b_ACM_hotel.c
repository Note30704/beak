#include <stdio.h>

int	main(void)
{
	int	t;
	int	h;
	int	w;
	int	num;
	int	front;
	int	end;

	scanf("%d", &t);
	while(t)
	{
		scanf("%d %d %d", &h, &w, &num);
		if (num % h != 0)
		{
			front = num % h;
			end = num / h + 1;
		}
		else
		{
			front = h;
			end = num / h;
		}
		printf("%d%02d\n", front, end);
		t--;
	}
	return (0);
}
