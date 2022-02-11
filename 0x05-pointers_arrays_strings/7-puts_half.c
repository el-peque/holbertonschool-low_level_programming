#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char str
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (j = (i / 2); j <= i; j++)
	{
		if (i % 2 != 0)
		{
			j++;
		}
		_putchar(*(str + j));
	}
	_putchar('\n');
}
