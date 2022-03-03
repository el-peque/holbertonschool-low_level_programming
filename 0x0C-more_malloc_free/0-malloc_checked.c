#include<stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 *
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(sizeof(*str) * b);
	if (str[0] == '\0')
	{
		exit(98);
	}
	return (0);
}
