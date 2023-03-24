#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * decription: check for digit
 * return: 1 if digit else 0
 */
int _isdigit(int c)

{

	if (c  >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
