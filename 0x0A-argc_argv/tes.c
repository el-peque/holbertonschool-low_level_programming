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
	int a = atoi(argv[2]);

	if (argc < 10)
	printf("%d\n", a);
	return (0);
}
