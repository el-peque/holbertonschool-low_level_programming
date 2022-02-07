#include "main.h"

/**
 * _abs - computes the absolute value of an integrer
 * @nem: input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
int _abs(int inn)
{
	int inn;

	if (inn > 0)
	{
		return (inn);
	}
	else if (inn < 0)
	{
		return (inn*(-1));
	}
	else
	{
		return (0);
	}
}
