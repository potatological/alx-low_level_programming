#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 *        if multiple of 3, Fizz is printed instead
 *        if multiple of 5, Buzz is printed instead
 *        if multiple of 3 & 5, FizzBuzz is printed instead
 *
 * Return: returns 0 when successful
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d ", i);
if (n < 100)
printf(" ");
}
printf("\n");
return (0);
}
