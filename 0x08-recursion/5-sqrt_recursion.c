#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 * @n: int n
 * @i: int i
 * Return: solution
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(n, ++i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int n
 * Return: solution
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
