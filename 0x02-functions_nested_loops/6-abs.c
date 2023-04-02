#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of an integer
 * @a: the integer to have the absolute value of
 * Return: 0.
 */

int _abs(int a)
{
if (a >= 0)
{
a = a;
printf("%d\n", a);
}
else
{
a = -a;
printf("%d\n", a);
}
return(0);
}
