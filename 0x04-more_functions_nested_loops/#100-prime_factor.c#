#include<stdio.h>

/**
 * main - prints the largest prime factor of a
 *
 * Return: should be 0
 */

int main(void)
{
	int a = 1231952;
	int i = 0;
	int j = 0;

	for (i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			for (j = 2; j <= i; j++)
			{
				if (i % j != 0)
				{
					printf("%d\n", a / i);
					return (0);
				}
			}
		}
	}
	return (1);
}
