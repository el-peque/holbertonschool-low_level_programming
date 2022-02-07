#include "main.h"

/**
 * _print_last_digit - computes the absolute value of an integrer
 * @nem: input character
 *
 * Return: 1 if its lowercase, 0 otherwise
 */
void jack_bauer(void)
{
	int hours = '0';
	int hourstwo = '0';
        int minutes = '0';
        int minutestwo = '0';

	while (hours < '2' && hourstwo < '4')
	{
		if (hourstwo == '9')
		{
			hourstwo = '0';
			hours++;
		}
		else if (minutestwo == '9')
		{
			minutestwo = '0';
			minutes++;
	        }
		else if ((minutes == '5') && (minutestwo == '9'))
		{
			hourstwo++;
			minutestwo = '0';
		}
		else
		{
			minutestwo++;
		}
		_putchar (hours);
		_putchar (hourstwo);
		_putchar (':');
		_putchar (minutes);
		_putchar (minutestwo);
		_putchar ('\n');
	}
}
