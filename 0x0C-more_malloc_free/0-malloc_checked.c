#include<stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 *
 * Return: 98 or 0
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(sizeof(*str) * b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
