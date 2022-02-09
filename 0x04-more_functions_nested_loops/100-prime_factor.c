#include<stdio.h>

/**
 * main - prints the largest prime factor of a
 *
 * Return: should be 0
 */

int main(void)
{
	long int a = 612852475143;
	long int i = 612852475143;

	for (i = 612852475143; i > 0; i--)
	{
		if (a % i == 0)
		{
			printf("%ld ", i);
		}
	}
	printf("\\n");

	return (0);
}
