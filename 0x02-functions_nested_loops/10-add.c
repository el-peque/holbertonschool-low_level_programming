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
		for (line = '0' ; line <= '9' ; line++)
		{
			if(line != 0)
			{
				_putchar(' ');
			}
			if(rslt < 10)
			{
				_putchar(' ');
			}
			if(rslt > 9)
			{
				_putchar((rslt / 10) + '0');
				_putchar((rslt % 10) + '0');
			}
			else
			{
				_putchar(rslt + '0');
			}
			if(line == '9')
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
}
