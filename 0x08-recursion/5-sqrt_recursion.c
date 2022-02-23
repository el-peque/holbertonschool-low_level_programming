#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int n
 * Return: solution
 */

int _sqrt_recursion(int n)
{
	int i = n /(n - 1);

	if (i * i == n)
	{
		return (i);
	}
	return (n / _sqrt_recursion(n - 1));
}
