#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char *s
 * @accept: char *accept
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int n = 0;
	int m = 0;
	char *c;

	for (n = 0; s[n] != '\0'; n++)
	{
		c = &s[n];
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				return(c);
			}
		}
	}
	return ('\0');
}
