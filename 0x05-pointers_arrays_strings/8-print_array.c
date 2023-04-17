#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n element of an array of integers
 *
 * @a: array of ints
 * @n: nbr of elements
 * Return: no return value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n - 1)
		printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
printf("\n");
}
