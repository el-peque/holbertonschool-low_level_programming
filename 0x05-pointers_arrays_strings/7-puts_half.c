#include "main.h"

/**
 * puts_half - prints half of a string
 * @*str: char *str
 */

void puts_half(char *str)
{
	int i = 0;

	for(i = 0; str[i] != '\n'; i++)
	{
		if (i <= (str / 2))
		{
			_putchar(str[i]);
		}
	}
}
