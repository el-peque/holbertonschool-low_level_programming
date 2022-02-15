#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string dest
 * @src: string src
 * @n: max bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	for (b = 0; b < n && src[b] != '\0' ; b++)
	{
		dest[b] = src[b];
	}
	for ( ; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
