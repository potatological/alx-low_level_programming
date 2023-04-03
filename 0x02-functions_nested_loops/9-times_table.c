#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: No return
 */

void times_table(void)
{
int i;
int j;
int mult;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
mult = i * j;
if ((mult / 10) != 0)
{
_putchar(mult / 10 + '0');
}
_putchar(mult % 10 + '0');
if (mult > 9)
{
if (j < 9)
{
_putchar(',');
}
_putchar(' ');
}
else
{
if (j < 9)
{
_putchar(',');
}
_putchar(' ');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
