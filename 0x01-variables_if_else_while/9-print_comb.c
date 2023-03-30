#include <stdio.h>

/**
 * main - the entry point
 *        prints the single digits followed by space comma
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
for(n = 0; n < 10; n++)
{
putchar(48 + n);
if (n == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
