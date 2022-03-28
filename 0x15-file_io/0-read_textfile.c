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
	int fd, size;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buff, letters);
	buff[letters] = '\0';
	close(fd);

	fd = write(STDOUT_FILENO, buff, letters);
	if (fd == -1)
		return (0);
	close(fd);
	size = strlen(buff) + 1;
	free(buff);
	return (size);
}
