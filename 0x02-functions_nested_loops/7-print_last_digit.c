#include "main.h"

/**
 * _print_last_digit - computes the absolute value of an integrer
 * @nem: input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
int print_last_digit(int n)
{
	lastDigit = n % 10;
	_putchar(lastDigit);

	return(lastDigit)
}