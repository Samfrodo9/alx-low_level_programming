#include "main.h"

/**
*create_file - A function that creates a file
*@filename: the name of file to create
*@text_content: string to write to file
*Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if(!text_content)
		text_content = "";

	for (i = 0; *(text_content + i) != '\0'; i++)
		;


	write(fd, filename, i);
	close(fd);

	return (1);
}
