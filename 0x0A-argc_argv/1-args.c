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
	_putchar(argc + '0');
	_putchar('\n');
	return (0);
}
