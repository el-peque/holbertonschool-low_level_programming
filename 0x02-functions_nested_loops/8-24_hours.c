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
			hours = '0';
			hourstwo++;
		}
		else if(minutestwo != '9')
		{
			minutestwo++;
	        }
		else
		{
			minutestwo = '0';
			minutes++;
		}
		_putchar (hours);
		_putchar (hourstwo);
		_putchar (':');
		_putchar (minutes);
		_putchar (minutestwo);
		_putchar ('\n');
	}
}
