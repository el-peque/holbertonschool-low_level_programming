#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @*a: int *a
 * @n: int n
 */

void print_array(int *a, int n)
{
	for(n = 0; n <= *a; n++)
	{
		if (a[n] != '\0')
		{
			printf("%d", a[n]);
		}
	}
}
