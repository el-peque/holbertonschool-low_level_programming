#include<stdio.h>
#include<stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	for (n = 0;  n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
