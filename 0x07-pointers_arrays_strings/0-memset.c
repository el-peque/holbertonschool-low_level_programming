#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 *
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	s[n] = b;
	return (s);
}
