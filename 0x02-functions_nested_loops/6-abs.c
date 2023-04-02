#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @a: the integer to have the absolute value of
 * Return: the absolute value of a.
 */

int _abs(int a)
{
int absoluteval;
if (a >= 0)
{
absoluteval = a * +1;
return(absoluteval);
}
else
{
absoluteval = a * -1;
return(absoluteval);
}
}
