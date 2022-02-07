#include "main.h"

/**
 * print_sign - checks for alphabet character
 * @n: input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n*(-1));
	}
	else
	{
		return (0);
	}
}
