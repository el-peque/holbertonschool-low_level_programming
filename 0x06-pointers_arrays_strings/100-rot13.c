#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @a: char a
 *
 * Return: not sure yet
 */

char *rot13(char *a)
{
	char b[] = {"abcdefghijklmnopqrstuvwxyzabcdefghijklmnABCDEFGHIJKLMNOPQRS
TUVWXYZABCDEFGHIJKLM"};
	int m = 0;
	int n = 0;

	while (a[n])
	{
		for (m = 0; m < 76; m++)
		{
			if (a[n] == b[m])
			{
				a[n] = b[m + 13];
				break;
			}
		}
		n++;
	}
	return (a);
}
