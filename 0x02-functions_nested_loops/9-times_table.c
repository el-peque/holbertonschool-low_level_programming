#include "main.h"

/**
 * jack_bauer - computes the absolute value of an integrer
 * input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
void times_table(void)
{
	char line = '0';
	char row = '0';
	char rslt = (row * line);

	for (row = '0' ; row <= '9' ; row++)
	{
		_putchar(rslt);
		_putchar(',');
		_putchar(' ');
	}
}
