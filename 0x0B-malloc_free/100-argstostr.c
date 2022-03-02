#include<stdio.h>
#include<stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: ac
 * @av: av
 *
 * Return: smthng
 */

char *argstostr(int ac, char **av)
{
	char **grid;
	int n = 0;

	if (ac == 0 || **av == '\0')
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * ac);
	for (n = 0;  *av[n] != '\0'; n++)
	{
		grid[n] = malloc(sizeof(int **) * *av[n]);
		if (grid == NULL)
		{
			return (NULL);
		}
	}
	return (*grid);
}
