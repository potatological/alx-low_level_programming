#include <stdio.h>

/**
 * main - the entry point
 *        prints 0 to 15 in hexadecimal
 *
 * Return: Always 0.
 */
int main(void)
{
  char c = 'a';
  int a = 0;
  while (a < 10)
    {
      putchar(48 + a);
      a++;
    }
  while (c <= 'f')
    {
      putchar(c);
      c++;
    }
  putchar('\n');
  return (0);
}
