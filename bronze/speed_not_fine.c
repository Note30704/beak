#include <stdio.h>

int	main(void)
{
	int	limit;
	int	speed;
	int	ans;

	scanf("%d %d", &limit, &speed);

	ans = speed - limit;

	if (ans <= 0)
		printf("Congratulations, you are within the speed limit!");
	else if (ans > 0 && ans <= 20)
		printf("You are speeding and your fine is $100.");
	else if (ans > 20 && ans <= 30)
		printf("You are speeding and your fine is $270.");
	else
		printf("You are speeding and your fine is $500.");
	return (0);
}
