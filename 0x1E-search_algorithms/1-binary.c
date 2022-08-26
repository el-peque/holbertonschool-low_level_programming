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
	int i, l = 0, r = (int)size - 1;

	while (array && (l <= r))
	{
		i = l + (r - l) / 2;
		print_array(array, l, r);
		if (array[i] == value)
			return (i);
		if (r == l)
			break;
		if (value > array[i])
		{
			l = i + 1;
		}
		else if (value < array[i])
		{
			r = i - 1;
		}
	}

	return (-1);
}


/**
 * print_array - prints an array
 * @array: array
 * @min: min
 * @max: max
 */

void print_array(int *array, int min, int max)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = min; i < max; i++)
	{
		printf("%d", array[i]);
		printf(", ");
	}
	printf("%d\n", array[max]);
}
