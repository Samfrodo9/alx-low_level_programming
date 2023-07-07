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
	int len = strlen(b);
	unsigned int result = 0;
	int j = len - 1;

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		result += (b[i] - '0') * _pow(2, j);
		j--;
	}


	return (result);
}
