#include <stdio.h>
#include "main.h"

/**
 * print_array - print elements of array
 * @a: array
 * @n: number elements to print
 * return: nothing
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
	printf("%d", a[b]);
	if (b != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
