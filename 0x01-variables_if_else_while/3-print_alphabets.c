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
  while (c <= 'z')
    {
      putchar(c);
    }
  char b = 'A';
  while (b <= 'Z')
    {
      putchar(b);
    }
  putchar('\n');
  return (0);
}
