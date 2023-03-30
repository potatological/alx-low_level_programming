#include <stdio.h>

/**
 * main - the entry point
 *        prints the lowercase and uppercase alphabets
 *
 * Return: Always 0.
 */
int main(void)
{
char c = 'a';
char b = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
