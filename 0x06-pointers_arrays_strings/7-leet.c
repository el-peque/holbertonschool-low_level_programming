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

	b[97] = 52;
	b[101] = 51;
	b[111] = 48;
	b[116] = 55;
	b[108] = 49;
	b[65] = 52;
	b[69] = 51;
	b[79] = 48;
	b[84] = 55;
	b[76] = 49;

	while (a[n])
	{
		if (a[n] == 97 || a[n] == 101 || a[n] == 108 || a[n] == 111 || a[n] == 116 || a[n] == 65 || a[n] == 69 || a[n] == 79 || a[n] == 84 || a[n] == 76)
		{
			a[n] = b[n];
		}
		n++;
	}
	return (a);
}
