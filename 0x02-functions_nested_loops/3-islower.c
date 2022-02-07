#include "main.h"

/**
 * _islower - checks for lowercase character
 * c - input character
 *
 * Return: 1 if it's lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
