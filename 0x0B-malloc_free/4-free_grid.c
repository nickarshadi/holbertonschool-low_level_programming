#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free a two dimensional grid
 * @grid: array to free from heap
 * @height: height of array / second dimension
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	for (a = 0; a < height; a++)
	{
		free(*(grid + a));
	}
	free(grid);
}
