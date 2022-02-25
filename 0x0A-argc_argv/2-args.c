#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of pointers
 * Return: should be zero
 */

int main(int argc, char *argv[])
{
	int n = 0;
	int m = 0;
	char *a = argv[m];
	int b = *argv[n];

	for (n = 0; n < argc; n++)
	{
		for (m = 0; a[m] != 0; m++)
		{
			putchar(a[m]);
		}
	}
	return (0);
}
