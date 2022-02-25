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
	char *a = argv[2] + '0';
	char *b = argv[3] + '0';
	char *error = "Error\n";
	int n = 0;
	int res = a * b;

	if (argc < 4)
	{
		for (n = 0; error[n] != '\0'; n++)
		{
			putchar(error[n]);
		}
		return (1);
	}
	putchar(res + '0');
	return (0);
}
