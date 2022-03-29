#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = cp_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}

#include "main.h"
#include <string.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters:  number of letters it should read and print
 * Return:  number of letters it could read and print
 */

int cp_file(const char *file_from, const char *file_to)
{
	int fd, df, a, b, size = 0, rest = 0, n = 0;
	char buff[1024];

	if (file_from == NULL || file_to == NULL)
		return (-1);

	size = strlen(file_from);

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		return (-1);

	df = open(file_to, O_CREAT | O_RDWR | O_APPEND, 00600);
	if (df == -1)
		return (-1);


	while (size > 1024)
	{
		a = read(fd, buff, 1024);
		if (a == -1)
		{
			return (-1);
		}
		size -= 1024;

		b = write(df, buff, a);
		if (b == -1 || a != b)
		{
			return (-1);
	       	}
		n += 1024;
	}
	rest = 1024 - size;
	a = read(fd, buff, rest);
	if (a == -1)
	{
		return (-1);
	}

	b = write(df, buff, a);
	if (b == -1 || a != b)
	{
		return (-1);
	}

	close(fd);
	close(df);
	return (1);
}
