#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: bytes
 * @c: char to assign
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
