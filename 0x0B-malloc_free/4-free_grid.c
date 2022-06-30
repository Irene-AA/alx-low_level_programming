#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main- frees allocated mem in 2D grid
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
