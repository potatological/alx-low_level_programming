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
unsigned long int sum = 0;
fib = a + b;
for (i = 3; i <= 50; i++)
{
while (fib < 4000000)
{
a = b;
b = fib;
fib = a + b;
if ((fib % 2) == 0)
{
sum = sum + fib;
}
}
}
printf("%lu", sum);
printf("\n");
return (0);
}
