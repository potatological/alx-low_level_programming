#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: the number to be tested
 * Return: 1 if n is positive, 0 if n is 0, -1 if n is negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0 + '0');
return (0);
}
}
