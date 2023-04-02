#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * a: the parameter that stores the number
 * b: the parameter that stores the last digit of a number
 * Return: returns the last digit b
 */

int print_last_digit(int a)
{
int b;
b = a % 10;
b = abs (b);
_putchar (b);
return (b);
}
