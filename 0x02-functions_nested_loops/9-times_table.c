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

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
a = (i * j);
if (j == 0)
_putchar('0');
else if (a <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(a + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
}
_putchar('\n');
}
}
