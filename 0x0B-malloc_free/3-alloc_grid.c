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
	int size = 1;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		size++;
	}
	for (m = 0; m < width; m++)
	{
		size++;
	}
	grid = malloc(sizeof(int) * size);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			grid[m][n] = 0;
		}
	}
	return (grid);
}
