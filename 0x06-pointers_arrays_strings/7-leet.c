#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: char a
 *
 * Return: not sure yet
 */

char *leet(char *a)
{
	char b[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char c[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int m = 0;
	int n = 0;

	while (a[n])
	{
		m = 0;
		while (m < 10)
		{
			if (a[n] == b[m])
			{
				a[n] = c[m];
			}
			m++;
		}
		n++;
	}
	return (a);
}
