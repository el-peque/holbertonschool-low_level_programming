#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int n = 0;
	int m = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int) * sizeof(width) * sizeof(height));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (m = 0; m <= height; m++)
	{
		for (n = 0; n <= width; n++)
		{
			grid[n][m] = 0;
		}
	}
	return (grid);
}
