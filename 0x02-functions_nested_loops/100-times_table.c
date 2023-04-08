#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: No return (void)
 */

void times_table(void)
{
int i;
int j;
int a;
int n = 15;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
a = (i * j);
if (n > 15 || n < 0)
{
continue;
}
else if (j == 0)
{
_putchar('0');
}
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
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
}
_putchar('\n');
}
}
