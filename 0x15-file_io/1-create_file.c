#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, size, b;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		b = write(fd, "", 0);
		if (b == -1)
		{
			return (-1);
		}
		return (1);
	}

	size = sizeof(text_content) + 1;

	b = write(fd, text_content, size);
	if (b == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
