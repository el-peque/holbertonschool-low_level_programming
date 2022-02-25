#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		if(isdigit(atoi(argv[n])) != 0)
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[n]);
	}
	printf("%d\n", res);
	return (0);
}
