#include "main.h"

/**
 * jack_bauer - computes the absolute value of an integrer
 * input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	while (hours < 24)
	{
		while (min < 60)
		{
			_putchar ('0' + (hours / 10));
			_putchar ('0' + (hours % 10));
			_putchar (':');
			_putchar ('0' + (min / 10));
			_putchar ('0' + (min % 10));
			_putchar ('\n');
			min++;
		}
		min = 0;
		hours++;
	}
}
