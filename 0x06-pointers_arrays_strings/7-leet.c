#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: char a
 *
 * Return: not sure yet
 */

char *leet(char *a)
{
	int n = 0;
	char b[120];
	int c = 0;

	b[97] = 98;

	while (a[n] != '\0')
	{
		c = a[n];
		if (a[n] == 97)
		{
			a[n] = b[c];
		}
		_putchar(a[n]);
		n++;
	}
	return (a);
}
