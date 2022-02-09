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

	for (i = 0; i < size; i++)
	{
		for (k = 0; k <= (size - j); k++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
