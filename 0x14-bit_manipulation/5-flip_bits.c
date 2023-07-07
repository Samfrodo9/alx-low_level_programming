#include "main.h"

/**
* flip_bits - function that returns the number of buts
* you will neeed to flip to get another
* @n: number one
* @m: number two
*
* Return: the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_num = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			bits_num++;
		n >>= 1;
		m >>= 1;
	}

	return bits_num;
}
