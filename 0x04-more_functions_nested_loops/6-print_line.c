#include "main.h"

/**
 * print_line - prints a line in the terminal
 * @n: number of times the "_" will be printed
 *
 * Return: no return value (void)
 */

void print_line(int n)
{
int i, n;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
