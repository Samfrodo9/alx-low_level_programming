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
	int extracted_bit;

	if(index > 63)
		return (-1);

	extracted_bit = (n >> index) & 1;

	return (extracted_bit);
}
