#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of square matrix of int
 * @a: int *a
 * @size: int size
 */

void print_diagsums(int *a, int size)
{
	int n = 0;
	int b = 0;
	int c = 0;
	int i = 0;

	for (n = 0; n < size; n++, i++)
	{
		c += a[(n * size + i)];
	}
	for (n = 0, i = 0; n <= size; n++, i++)
	{
		b += a[(size * n - i)];
	}

	printf("%d, %d \n", c, b);
}
