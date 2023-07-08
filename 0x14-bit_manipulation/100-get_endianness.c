#include "main.h"

/**
 * get_endianness - A function that checks for endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int get = 1;
	char *store = (char *)&get;

	if (*store == 1)
		return (1);
	else
		return (0);
}
