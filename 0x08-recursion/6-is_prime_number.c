#include "main.h"

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: int n
 * Return: 1 if its a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return  (0);
	}
	return (prime(n, n - 1));
}

int prime(int n, int i)
{
	if (i > 1)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime(n, i - 1));
		}
	}
	return (1);
}
