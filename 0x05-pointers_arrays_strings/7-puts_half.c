#include "main.h"

/**
 * puts_half - prints half of a string
 * @*str: char *str
 */

void puts_half(char *str)
{
	int i = 0;
	int n = (str / 2);

	for(i = 0; str[i] != '\n'; i++)
	{
		if (i >= (n / 2))
		{
			_putchar(str[i]);
		}
	}
}
