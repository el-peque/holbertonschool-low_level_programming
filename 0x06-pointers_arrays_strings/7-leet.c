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
	char b[1000];

	b[97] = '4';
	b[101] = '3';
	b[111] = '0';
	b[116] = '7';
	b[108] = '1';

	for (n = 0; a[n] != '\0'; n++)
	{
		if (a[n] == 97 || a[n] == 101 || a[n] == 108 || a[n] == 111 || a[n] == 116)
		{
			a[n] = b[n];
		}
	}
	return (a);
}
