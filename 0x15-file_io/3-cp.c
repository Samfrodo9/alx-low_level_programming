#include "main.h"

/**
 * error_file - function that checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: the arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always success
 */
int main(int argc, char **argv)
{
	int file_1, file_2, err_close;
	ssize_t numchars, numwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_1 = open(argv[1], O_RDONLY);
	file_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_1, file_2, argv);

	numchars = 1024;
	while (numchars == 1024)
	{
		numchars = read(file_1, buf, 1024);
		if (numchars == -1)
			error_file(-1, 0, argv);
		numwr = write(file_2, buf, numchars);
		if (numwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_1);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1);
		exit(100);
	}

	err_close = close(file_2);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1);
		exit(100);
	}
	return (0);
}
