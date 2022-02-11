#include "main.h"

/**
 * rev_string - reverses a string
 * @*s: char *s
 */

void rev_string(char *s)
{
	int i = 0;

	for(i = *s; i >= 0; i--)
	{
		if (s[i] != '\0')
		{
			_putchar(s[i]);
		}
	}
}
