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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
        printf("Last digit of %d is %1d and is greater than 5\n", n, n);
	}
	else if ((n % 10) == 0)
	{
	printf("Last digit of %d is %1d and is 0\n", n, n);
	}
	else
	{
	printf("Last digit of %d is %1d and is less than 6 and not 0\n", n, n);
	}
	return (0);
}
