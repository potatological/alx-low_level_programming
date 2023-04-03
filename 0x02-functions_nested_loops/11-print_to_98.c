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
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
else
{
while (n <= 98)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
}
