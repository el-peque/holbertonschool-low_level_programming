#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: should be zero
 */
int main(void)
{
	int b = 1, i, j;

	for(i = 0 ; i < 9 ; i++)
	{
		for(j = b; j <= 9; j++)
		{
			putchar (i + '0');
			putchar (j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

		b++;
	}
	putchar('\n');
	return (0);
}
