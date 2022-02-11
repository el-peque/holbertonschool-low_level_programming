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
		_putchar(str[i]);
		i++;
		if (str[i] == '\0')
		{
			break;
		}
		i++;
		if (str[i] == '\0')
		{
			break;
		}
	}
	_putchar ('\n');
}
