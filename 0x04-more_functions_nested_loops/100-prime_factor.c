#include<stdio.h>

/**
 * main - prints the largest prime factor of a
 *
 * Return: should be 0
 */

int main(void)
{
	unsigned long int a = 1231952;
	unsigned long int i = 0;
	unsigned long int j = 0;

	for (i = (a - 1); i > 0; i--)
	{
		if (a % i == 0)
		{
			for (j = (i - 1); j > 1; j--)
			{
				if ((i % j) != 0)
				{
					printf("%lud\n", j);
					return (0);
				}
			}
		}
	}
	return (1);
}
