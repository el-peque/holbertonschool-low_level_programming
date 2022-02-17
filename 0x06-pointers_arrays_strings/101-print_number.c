#include "main.h"

/**
 * print_number - prints an integer
 * @n: int n
 *
 * Return: output
 */

void print_number(int n)
{
	int c = 1;

	if (n == 0)
	{
		_putchar ('0');
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}
		while (n / c != 0)
		{
			c *= 10;
		}
		c /= 10;
		for ( ; c >= 1; c /= 10)
		{
			_putchar(((n / c)  % 10) + '0');
		}
	}
}
