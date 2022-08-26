#include "search_algos.h"
void print_array(int *array, int min, int max);
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located or -1 if value is
 * not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int i, l = 0, r = (int)size;
	int test = 0;

	if (!array)
		return (-1);
	while (test < 10)
	{
		i = (l + r) / 2;
		printf("min: %d\tmax: %d\ti: %d\n", l, r, i);
		print_array(array, l, r);
		if (r == l)
			return(i);
		if (value > array[i])
		{
			l = i + 1;
		}
		else if (value < array[i])
		{
			r = i - 1;
		}
		test++;
	}

	return (-1);
}

void print_array(int *array, int min, int max)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = min; i < max; i++)
	{
		printf("%d", array[i]);
		if (i < max - 1)
			printf(", ");
	}
	printf("\n");
}
