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
  for (i=0; i < 9; i++)
    {
      for (j=i+1; j < 10; j++)
	{
	  if (i == j)
	    continue;
	  putchar(i+'0');
	  putchar(j+'0');
	  if (i == 8 && j == 9)
	    continue;
	  putchar(',');
	  putchar(' ');
	}
    }
  return (0);
}
