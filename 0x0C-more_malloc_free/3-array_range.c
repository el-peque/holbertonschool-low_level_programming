#include<stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *intarray;
	int a = 0;
	int n = 0;

	if (min > max)
	{
		return (NULL);
	}
	intarray = malloc(sizeof(*intarray) * (max - min));
	if (intarray[0] == '\0')
	{
		return (NULL);
	}
	for (n = min; n < max; n++, a++)
	{
		intarray[a] = n;
	}
	return (intarray);
}
