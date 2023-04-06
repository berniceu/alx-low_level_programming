#include "main.h"
/**
 * _print_rev_recursion - print sting in reverse
 * @s: string
 * Return: o
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
