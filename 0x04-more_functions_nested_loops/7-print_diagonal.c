#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times the "\" will be printed
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < (n - 1); i++)
{
_putchar(92);
_putchar('\n');
for (j = 0; j <= i; j++)
{
_putchar(32);
}
}
_putchar(92);
_putchar('\n');
}
}
