#include <stdio.h>

/**
 * main - the entry point
 *        prints combination of different numbers of two digits
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int j;
for (i = 0; i < 99; i++)
{
for (j = i + 1; j < 100; j++)
{
if (i == j)
continue;
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i == 98 && j == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
