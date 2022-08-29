#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located or -1 if value is
 * not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, size_sqr = 0, max;

	size_sqr = (int)(sqrt(size));
	if (!array)
		return (-1);
	while (array && i < size)
	{
		if (array[i] >= value)
		{
			max = i;
			i -= size_sqr;
			printf("Value found between indexes [%ld] and [%ld]\n", i, max);
			for (i = i; i <= max; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return ((int)i);
			}
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += size_sqr;
	}
	max = i;
	i -= size_sqr;
	printf("Value found between indexes [%ld] and [%ld]\n", i, max);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (-1);
}
