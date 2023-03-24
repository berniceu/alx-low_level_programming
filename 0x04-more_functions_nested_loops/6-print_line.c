#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * description: draw straight line
 * Return: always 0
 */
void print_line(int n)

{

	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
