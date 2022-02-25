#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integres
 * @argc: argument count
 * @argv: array of pointers
 * Return: should be zero
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int res = a * b;

	if (argc < 2 && argc >= 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}
