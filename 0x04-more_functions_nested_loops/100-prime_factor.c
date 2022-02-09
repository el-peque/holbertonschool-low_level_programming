#include<stdio.h>

/**
 * main - prints the largest prime factor of a
 *
 * Return: should be 0
 */

int main(void)
{
	unsigned long int a = 612852475143;
	unsigned long int i = 0;

	for (i = (a - 1); i > 0; i--)
	{
		if (a % i == 0)
		{
			printf("%ld\n", i);

			return (0);
		}
	}
	return (1);
}
