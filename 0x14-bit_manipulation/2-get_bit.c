#include "main.h"

/**
 * get_bit - function that returns the value of a bit at an index in a decimal
 * number
 * @n: number to search
 * @index: index at the bit
 *
 * Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (-1);

	for (j = 0; j <= 63; j++)
	{
		if (index == j)
			return ((n >> j) & 1);
	}

	return (-1);
}
