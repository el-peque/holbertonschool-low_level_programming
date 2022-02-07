#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
