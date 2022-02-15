#include "main.h"

/**
 * _strncat - concadenates two strings
 * @dest: string dest
 * @src: string src
 * @n: max bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int n = 0;
	int m = 0;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}
	for (m = 0; src[m] != '\0'; m++)
	{
		n++;
		dest[n] = src[m];
	}
	return (dest);
}
