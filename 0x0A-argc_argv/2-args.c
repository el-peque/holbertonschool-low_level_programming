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

	for (n = 1; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
