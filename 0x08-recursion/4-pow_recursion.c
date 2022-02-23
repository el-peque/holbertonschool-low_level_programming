#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base x
 * @y: power y
 * Return: solution
 */

int _pow_recursion(int x, int y)
{
	int n = 0;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (n <= y)
	{
	_pow_recursion(x*x, y);
	}
	return (x);
}
