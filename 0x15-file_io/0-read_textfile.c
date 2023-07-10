#include "main.h"

/**
 * read_textfile - A function to read and print from a file
 * @filename: the buffer to read from
 * @letters: number of characters to read
 * Return: On success number of characters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = (char *)malloc(letters * sizeof(char));
	ssize_t readBytes;

	if (filename == NULL)
		return (0);
	
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	readBytes = read(fd, buffer, letters);
	if (readBytes == -1)
		return (0);

	write(STDOUT_FILENO, buffer, readBytes);

	free(buffer);
	close(fd);

	return (readBytes);
}
