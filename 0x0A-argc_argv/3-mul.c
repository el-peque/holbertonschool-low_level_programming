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
	int a, b, res;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
