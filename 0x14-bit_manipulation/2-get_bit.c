#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at an index in a decimal
 * number
 * @n: number to search
 * @index: index at the bit
 *
 * Return - Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (-1);

	for (i = 0; i <= 63; n >>= 1; i++)
	{
		if (index == i)
			return (n & i);
	}

	return (-1);
}
