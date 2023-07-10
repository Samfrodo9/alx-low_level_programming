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
	char *buffer;
	ssize_t readBytes;
	ssize_t writeRV = 0;

	if(filename == NULL)
		return (0);

	buffer = maloc(letter * sizeof(char));
	
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	readBytes = read(fd, buffer, letters);
	if (readBytes == -1)
		return (0);

	writeRV = write(STDOUT_FILENO, buffer, readBytes);
	if (writeRV == -1)
		return (0);

	free(buffer);
	close(fd);

	return (readBytes);
}
