#include "main.h"
#include <stdio.h>

/**
 * main - prints sum of multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i += 1)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
