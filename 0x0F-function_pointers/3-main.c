#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - performs simple operations
 * @argc: argument count, should be 3
 * @argv: argv
 *
 * Return: Hopefully 0
 */
int main(int argc, char *argv[])
{
	int res, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = get_op_func(argv[2])(a, b);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", res);
	return (0);
}
