#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed
 * @dest: char dest
 * @src: char src
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
}
