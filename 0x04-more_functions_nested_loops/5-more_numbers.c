#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: should be 0
 */

void more_numbers(void)
{
	int n = 0;
	int i = 0;

	for (i = 0; i <10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10);
			}
			_putchar(n % 10);
		}
		_putchar('\n');
	}

	return (0);
}
