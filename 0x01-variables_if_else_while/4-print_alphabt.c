#include <stdio.h>

/**
 * main - the entry point
 *        prints the alphabet except e and q
 *
 * Return: Always 0.
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if ((c != 'e')||(c != 'q'))
{
putchar(c);
c++;
}
else
{
c++;
}
}
putchar('\n');
return (0);
}
