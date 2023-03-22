#include "main.h"
/**
 * main - check the code.
 * description: print sign of a number
 * Return: 1 if n is greater than zero, -1 if n is less than zero, the rest is o
 */
int print_sign(int n)
{
	if (n >0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
