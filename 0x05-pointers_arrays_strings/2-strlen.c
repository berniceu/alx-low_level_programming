#include "main.h"
#include <stdlib.h>
/**
 * _strlen - returns length of string
 * description: calculate length of string
 * @s: string
 * Return: length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
