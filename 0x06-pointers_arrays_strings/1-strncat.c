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
	int a = 0;
	int b = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	a--;
	for (b = 0; src[b] <= n ; b++)
	{
		a++;
		dest[a] = src[b];
	}
	return (dest);
}
