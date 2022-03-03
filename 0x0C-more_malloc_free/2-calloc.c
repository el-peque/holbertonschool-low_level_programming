#include<stdlib.h>
#include "main.h"

/**
 * _calloc - allocates  memory for an array, using malloc
 * @nmemb: nmemb
 * @size: size
 *
 * Return: none?
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *calloc;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	calloc = malloc(sizeof(*calloc) * nmemb);
	if (calloc == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb; a++)
	{
		calloc[a] = malloc(sizeof(size) * size);
	}
	return (calloc);
}
