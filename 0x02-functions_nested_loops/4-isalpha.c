#include "main.h"
/**
 * main - Entry point
 * description: 'checks for aphabetic character'
 * Return: 1 for alphabetic character, the rest is 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
