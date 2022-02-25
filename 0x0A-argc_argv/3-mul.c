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
	int a = atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (n = 0; n < atoi(argv[3]); n++)
	{
		a += a;
	}
	printf("%d\n", a);
	return (0);
}
