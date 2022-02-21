#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char *s
 * @accept: char *accept
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int m = 0;
	int b = 0;

	for (m = 0; accept[m] != '\0'; m++)
	{
		for (n = 0; s[n] != '\0' && s[n] != ',' ; n++)
		{
			if (s[n] == accept[m])
			{
				b++;
			}
		}
	}
	return (b);
}
