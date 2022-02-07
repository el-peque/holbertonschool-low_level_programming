#include "main.h"

/**
 * _print_last_digit - computes the absolute value of an integrer
 * @nem: input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;
	if (lastDigit >=0)
	{
		_putchar(lastDigit + '0');

		return(lastDigit);
	}
	else
	{
		_putchar(-lastDigit + '0');

		return(-lastDigit);
	}
}
