#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of pointers
 * Return: should be zero
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	putchar(argc + '0');
	putchar('\n');
	return (0);
}
