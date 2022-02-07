#include "main.h"

/**
 * _islower(int c) - checks for lowercase character
 *
 */
int _islower(int c)
{
	if ('a' <= (int c) <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
