#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 & 2
 *
 * Return: always 0.
 */

int main(void)
{
int i;
unsigned long int fib;
unsigned long int a = 1;
unsigned long int b = 2;
fib = a + b;
printf("%lu, %lu, ", a, b);
for (i = 3; i <= 98; i++)
{
printf("%lu", fib);
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
