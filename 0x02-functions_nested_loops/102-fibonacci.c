#include "main.h"
#include <stdio.h>

/**
 * main - prints fibonacci numbers til 50
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 0, b = 0, f = 1, i = 0;

	for (i = 1; i < 50; i++)
	{
		a = b;
		b = f;
		f = a + b;
		printf("%ld, ", f);
	}
	a = b;
	b = f;
	f = a + b;
	printf("%ld\n", f);
	return (0);
}
