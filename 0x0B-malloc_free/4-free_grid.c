#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free a 2-D grid
 * @grid: allocated value
 * @height: size
 * Return: 0
 */
void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
