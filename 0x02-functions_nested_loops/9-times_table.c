#include "main.h"

/**
 * jack_bauer - computes the absolute value of an integrer
 * input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
void times_table(void)
{
	int n = '0';
	int multp = '9';

	for(n = 0 ; n <= 9 ; n++)
	{
		_putchar(n * multp);
		_putchar(',');
		_putchar(' ');
	}
}
