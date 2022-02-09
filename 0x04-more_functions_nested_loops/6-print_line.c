#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: not sure yet
 *
 * Return: should be 0
 */

void print_line(int n)
{
	int n;
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

	return (0);
}
