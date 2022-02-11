#include "main.h"

/**
 * puts2 - prints every other character
 * @str: char str
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar ('\n');
}
