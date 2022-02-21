#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: first n bytes to be filled
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	for (c = 0; c < n ; c++)
	s[c] = b;
	return (s);
}
