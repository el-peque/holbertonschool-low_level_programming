#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: char *s
 * @c: char c
 * Return: returns a pointer to the first occurrence of the character c
 *         in the strings, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int n = 0;
	char *b;

	for (n = 0; s[n] != '\0' ; n++)
	{
		b = &s[n];
		if (s[n] == c)
		{
			return (b);
			break;
		}
	}
	return ('\0');
}
