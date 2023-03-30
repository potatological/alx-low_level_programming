#include <stdio.h>

/**
 * main - the entry point
 *        prints the single digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int a = 0;
while (a < 10)
{
putchar(48 + a);
a++;
}
putchar ('\n');
return (0);
}
