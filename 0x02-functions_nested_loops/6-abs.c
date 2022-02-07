#include "main.h"

/**
 * _abs - computes the absolute value of an integrer
 * @n: input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
