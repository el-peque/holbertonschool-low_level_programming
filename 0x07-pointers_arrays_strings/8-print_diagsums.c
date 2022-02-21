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
	int m = 0;
	int c = 0;

	for (n = 0; n < size; n++)
	{
		for (m = 0 ; m < size; m++)
		{
			if (n == m)
			{
				(c += a[n]);
			}
		}
	}
	printf("%d", c);
}
