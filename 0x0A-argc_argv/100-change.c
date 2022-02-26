#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of pointers
 * Return: should be zero
 */

int main(int argc, char *argv[])
{
	int n[5] = {25, 10, 5, 2, 1};
	int m = 0;
	int res = atoi(argv[1]);
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	while (m < 4)
	{
		if (res == 0)
		{
			break;
		}
		if (res - n[m] >= n[m])
		{
			res -= n[m];
			count++;
			continue;
		}
		else if (res - n[m] < n[m])
		{
			m++;
		}
	}
	printf("%d\n", count);
	printf("%d, %d, %d, %d, %d\n", n[0], n[1], n[2], n[3], n[4]);
	return (0);
}
