#include "main.h"

/**
 * print_number - prints an integer
 * @n: int n
 *
 * Return: output
 */

void print_number(int n)
{
	int c = 0;

	for (c = 1; ; c *= 10)
	{
		if (n / c != 0)
		{
			_putchar(((n / c)  % 10) + '0');
			continue;
		}
		else
		{
			break;
		}
	}
}
