#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of tables wanted
 * Return: No return (void)
 */

void print_times_table(int n)
{
  int i, j, a;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
a = (i * j);
if (n > 15 || n < 0)
continue;
else if (j == 0)
_putchar('0');
else if (a <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(a + '0');
}
else if (a <= 99 && a >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((a / 100) + '0');
_putchar(((a - 100) / 10) + '0');
_putchar((a % 10) + '0');
}
}
_putchar('\n');
}
}
