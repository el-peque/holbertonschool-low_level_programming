#include "main.h"

/**
 * print_numbers - prints numbers, from 0 to 9
 *
 * Return: should be 0
 */

void print_numbers(void)
{
	int n = 0;

	for (n = 48; n <= (48 + 9); n++)
	{
		if (n == (48 + 2) || n == (48 + 4))
		{
			n++;
		}
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
