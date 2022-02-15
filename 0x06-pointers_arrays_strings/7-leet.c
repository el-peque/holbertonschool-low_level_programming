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

	b[97] = '4';
	b[101] = '3';
	b[111] = '0';
	b[116] = '7';
	b[108] = '1';
	b[65] = '4';
	b[69] = '3';
	b[79] = '0';
	b[84] = '7';
	b[76] = '1';

	while (a[n])
	{
		if (a[n] == 'A' || a[n] == 'E' || a[n] == 'O' || a[n] == 'T' || a[n] == 'L' || a[n] == 'a' || a[n] =\
		    = 'e' || a[n] == 'o' || a[n] == 't' || a[n] == 'l')
		{
			a[n] = b[n];
		}
		n++;
	}
	return (a);
}
