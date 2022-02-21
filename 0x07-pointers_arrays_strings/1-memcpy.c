#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area
 * @src: memory area
 * @n: numer of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	for (c = 0; c < n ; c++)
	dest[c] = src[c];
	return (dest);
}
