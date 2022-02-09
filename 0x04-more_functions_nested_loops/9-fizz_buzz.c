#include "main.h"

/**
 * print_triangle - draws a triangle in the terminal
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (k = n; k >= 0; k--)
	{
		_putchar(' ');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
