#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int n
 */

void print_times_table(int n)
{
	int i = 0, j = 0, spaces = 9;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d,", j * i);
			if ((j + 1) * i == 0)
				printf("   ");
			else
			{
			spaces = 1000;
			while (spaces > (j + 1) * i)
			{
				printf(" ");
				spaces /= 10; }
			}
		}
		printf("%d\n", j * i);
	}
}
