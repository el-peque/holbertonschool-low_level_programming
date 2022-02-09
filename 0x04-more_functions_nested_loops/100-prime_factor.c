#include<stdio.h>

/**
 * prime_factor - draws a triangle in the terminal
 * @size: size of the triangle
 *
 */

int main(void)
{
	long int a = 612852475143;
	long int i = (a - 1);

	while (i > 0)
	{
		if (a % i == 0)
		{
			printf("%ld ", i);
		}
		else
		{
			i--;
		}
	}
	printf("\\n");

	return (0);
}
