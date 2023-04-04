#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 & 2
 *
 * return: always 0.
 */

int main(void)
{
int i;
int fib;
int a = 1;
int b = 2;
fib = a + b;
printf("%d, %d, ", a, b);
for (i = 3; i <= 50; i++)
{
printf("%d, ", fib);
a = b;
b = fib;
fib = a + b;
}
printf("\n");
return (0);
}
