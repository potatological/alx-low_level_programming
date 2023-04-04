#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers starting with 1 & 2
 *
 * Return: always 0.
 */

int main(void)
{
int i;
double fib;
double a = 1;
double b = 2;
fib = a + b;
printf("%d, %d, ", a, b);
for (i = 3; i <= 98; i++)
{
printf("%d", fib);
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
