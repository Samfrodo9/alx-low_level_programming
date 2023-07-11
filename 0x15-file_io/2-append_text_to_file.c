#include "main.h"

/**
 * append_text_to_file - a funct that appends to a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: -1 if null and 1 if exixt
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
		return (-1);

	fd = 0;

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}


	fd = open(filename, O_WRONGLY | 0_APPEND);
		if (fd == -1)
			return (-1);

	write(fd, text_content, i);

	close(fd);

	return (1);
}
