#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_grid- void function
 * @grid: grid
 * @height: height
 * Description: frees memory in 2D grid
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
