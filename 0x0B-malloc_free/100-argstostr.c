#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of program
 * @ac: int input
 * @av: array
 * Return: NULL if it fails else pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

	for (j = 0; av[i][j]; j++)
		l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[r] = av[i][j];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
