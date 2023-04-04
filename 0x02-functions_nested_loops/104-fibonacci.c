#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 & 2
 *
 * Return: always 0.
 */

int main(void)
{
int i;
long double fib;
long double a = 1;
long double b = 2;
fib = a + b;
printf("%ld, %ld, ", a, b);
for (i = 3; i <= 98; i++)
{
printf("%ld", fib);
if (i < 98)
{
printf(", ");
}
a = b;
b = fib;
fib = a + b;
}
printf("\n");
return (0);
}
