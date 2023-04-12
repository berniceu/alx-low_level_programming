#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *i;
	int j, r = 0;

	if (str == NULL)
	{
	return (NULL);
	}

	j = 0;
	while (str[j] != '\0')
		j++;
	i = malloc(sizeof(char) * (j + 1));

	if (i == NULL)
	{
	return (NULL);
	}

	for (r = 0; str[r]; r++)
	i[r] = str[r];
	{
	return (i);
	}
}
