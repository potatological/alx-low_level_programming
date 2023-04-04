#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 & 2
 *
 * Return: always 0.
 */

int main(void)
{
int i;
float fib;
float a = 1;
float b = 2;
fib = a + b;
printf("%f, %f, ", a, b);
for (i = 3; i <= 50; i++)
{
printf("%f, ", fib);
a = b;
b = fib;
fib = a + b;
}
printf("\n");
return (0);
}
