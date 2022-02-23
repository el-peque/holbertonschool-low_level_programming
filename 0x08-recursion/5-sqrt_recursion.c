#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int n
 * Return: solution
 */

int _sqrt_recursion(int n)
{
	start = 0;
	mid = start + n;

	if (mid*mid < n)
	{
		start = mid;
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return(x * _pow_recursion(x), y - 1);
}
