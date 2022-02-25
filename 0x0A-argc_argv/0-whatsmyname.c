#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: array of pointers
 * Return: should be zero
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int n = 0;
	char *a = argv[0];

	for (n = 0; a[n] != '\0'; n++)
	{
		putchar(a[n]);
	}
	putchar('\n');
	return (0);
}
