#include "main.h"

/**
 * _print_last_digit - computes the absolute value of an integrer
 * @nem: input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
void jack_bauer(void)
{
	int hours = "00";
	int minutes = "00";

	while (hours < "24")
	{
		for (minutes = "00" ; minutes <= "59" ; minutes++)
		{
			_putchar (hours);
			_putchar (':');
			_putchar (minutes);
		}
	}
}
