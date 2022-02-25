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

	for (n = 0; *argv[n] != '\0'; n++)
	{
		printf("%d\n", atoi(*argv[n]) += atoi(*argv[n + 1]));
	}

	return (0);
}
