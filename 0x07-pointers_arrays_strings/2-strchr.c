#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: char *s
 * @c: char c
 * @n: numer of bytes
 * Return - returns a pointer to the first occurrence of the character c
 *          in the strings, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	for (n = 0; s[n + 1] != '\0' ; n++)
	{
		if (s[n] == c)
		{
			return (s[n]);
		}
	}
	return ('\0');
}
