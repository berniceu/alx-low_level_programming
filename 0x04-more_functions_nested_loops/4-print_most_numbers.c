#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * description: print numbers except 2 and 4
 * Return: always 0
 */

void print_most_numbers(void)
{

	int i = 0;

	for (; i <= 9; i++)
	{
	if (i == 2 || i == 4)
	{
	continue;
	}
	else
	{
	_putchar(i + '0');
	}
	}
	_putchar('\n');
}
	
