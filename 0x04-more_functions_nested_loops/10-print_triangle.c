#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of triangle
 *
 * Return: no return value
 */

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
_putchar('\n');
else
{
for (i = size; i > 0; i--)
{
for (j = i - 1; j > 0; j--)
{
_putchar(32);
}
for (k = size - j; k > 0; k--)
{
_putchar(35);
}
_putchar('\n');
}
}
}
