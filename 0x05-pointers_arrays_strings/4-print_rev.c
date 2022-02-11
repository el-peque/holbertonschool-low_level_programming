#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @*s: char *s
 */

void print_rev(char *s)
{
	int i = 0;

	for(i = *s; i >= 0; i--)
	{
		if (s[i] != '\0')
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
