#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: int n
 */

void print_to_98(int n)
{
	int i = n;

	while (i < 98)
	{
		printf("%d, ", i);
		i++;
	}

	while (i > 98)
	{
		printf("%d, ", i);
		i--;
	}
	printf("%d\n", 98);
}
