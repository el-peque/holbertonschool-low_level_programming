#include "main.h"
#include <stdio.h>

/**
 * main - prints fibonacci numbers til 50
 * Return: 0
 */

int main(void)
{
	unsigned int a = 0, b = 0, f = 1, i = 0;

	for (i = 0; i < 50; i++)
	{
		a = b;
		b = f;
		f = a + b;
		printf("%d, ", f);
	}
	return (0);
}
