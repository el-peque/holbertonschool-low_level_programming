#include "main.h"

/**
 * times_table - displays a time table
 * input character
 *
 * Return: smthn
 */
void print_to_98(int n)
{
	int n = 0;

	for (n = 0 ; n <= 9 ; n++)
	{
		res = (row * line);
		if (line != 0)
			{
				_putchar(' ');
				if (res < 10)
				{
					_putchar(' ');
				}
			}
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(res + '0');
			}
			if (line == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
}
