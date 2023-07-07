#include "main.h"

/**
 * int binary_to_uint - A function that converts binary number to unsigned int
 * @b: the string storing 0 and 1 character
 *
 * Return: Zero on failure and result on success
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if ((b[i] < '0') || (b[i] > '1'))
			return (0);

		result += 2 * result + (b[i] - '0');
	}

	return (result);
}
