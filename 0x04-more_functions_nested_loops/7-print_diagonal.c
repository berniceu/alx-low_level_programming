#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * description: print diagonal
 * Return: empty
 */

void print_diagonal(int n)

{

	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < n; j++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
