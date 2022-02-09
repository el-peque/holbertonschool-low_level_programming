#include "main.h"

/**
 * _idigit - checks if c is a digit
 * @c: int to check
 *
 * Return: 1 if it's a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= (48 + 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
