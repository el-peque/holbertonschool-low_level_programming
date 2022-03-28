#include "main.h"
#include <string.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters:  number of letters it should read and print
 * Return:  number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, a, b;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	a = read(fd, buff, letters);

	b = write(STDOUT_FILENO, buff, a);
	if (b == -1 || a != b)
		return (0);

	close(a);
	close(b);
	free(buff);
	return (a);
}
