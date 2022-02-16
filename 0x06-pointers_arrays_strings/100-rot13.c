#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @a: char a
 *
 * Return: not sure yet
 */

char *rot13(char *a)
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
				a[n] = b[m + 13];
			}
			m++;
		}
		n++;
	}
	return (a);
}
