#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a space
 *
 * @n: parameter to start the count of
 *
 * Return: no return value
 */

void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
if ((n / 10) != 0)
{
_putchar((n / 10) + '0');
}
 _putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
n--;
}
}
else
{
while (n <= 98)
{
if ((n / 10) != 0)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
n++;
}
}
}
