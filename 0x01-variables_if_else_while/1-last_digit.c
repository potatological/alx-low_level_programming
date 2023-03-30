#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry point
 *        prints the last digit of n + whether is >5, =0 or <6
 * Return: Always 0.
 */
int main(void)
{
	int n, last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dig = n % 10;
	if ((n % 10) > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	}
	else if ((n % 10) == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last_dig);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	}
	return (0);
}
