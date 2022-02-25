#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of pointers
 * Return: should be zero
 */

int main(int argc, char *argv[])
{
	int n = 0;
	int res = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (n = 0; n < argc; n++)
	{
		res += atoi(argv[n]);
	}
	printf("%d\n", res);
	return (0);
}
