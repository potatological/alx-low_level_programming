#include <stdio.h>

/**
 * main - the entry point
 *        prints the single digits followed by space comma
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(48 + n);
if (n == 9)
{
continue;
}
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
