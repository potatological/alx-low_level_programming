#include "main.h"

/**
 * main - the entry point
 *        prints all the alphabet, lowercase
 *
 * print_alphabet: function that allow us to print
 */

void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
