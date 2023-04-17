#include "main.h"
/**
* swap_int - function that swaps the value of 2 ints
*
* @a: first int
* @b: second int
* Return: no return value
*/
void swap_int(int *a, int *b)
{
		int swap;

		swap = a;
		*a = b;
		*b = swap;
}
