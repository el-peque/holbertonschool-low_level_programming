#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: given array
 * @size: size of the array
 * @cmp: pointer to the cmp function
 *
 * Return: index of the first element wichi works or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size >= 1 && *cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
