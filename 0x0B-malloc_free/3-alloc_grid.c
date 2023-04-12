#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2-D array of integers
 * @width: size
 * @height: size
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **i;
	int j, k;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
	{
	return (NULL);
	}

	for (j = 0; j < height; j++)
	{
	i[j] = malloc(sizeof(int) * width);

	if (i[j] == NULL)
		{
		for (; j >= 0; j--)
			free(i[j]);

		free(i);

		return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			i[j][k] = 0;
	}
	return (i);
}
