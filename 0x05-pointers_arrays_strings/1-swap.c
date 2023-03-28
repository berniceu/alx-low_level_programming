#include "main.h"

/**
 * swap_int - swaps values of integers
 * description: swap value of two integers
 * @a: int pointer
 * @b: int pointer
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
