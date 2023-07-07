#include "main.h"

/**
 * set_bit - function that change to 1 the bit of a given index.
 * An: the input number
 * @index: the input index number
 * @n: pointer to the memory location
 * Return: 1 if succcesful, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);

	return (1);
}
