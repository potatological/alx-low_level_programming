#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: No return (void)
 */

void jack_bauer(void)
{
  int i;
  int j;
  for (i = 00; i < 24; i++)
    {
      for (j = 00; j < 60; j++)
	{
	  _putchar(i + '0');
	  _putchar(':');
	  _putchar(j + '0');
	  _putchar('\n');
	}
    }
}
