#include <stdio.h>

/**
 * main - the entry point
 *        program that prints lowercase alphabets
 *
 * Return: Always 0.
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
