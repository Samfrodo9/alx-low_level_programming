#ifndef SAM_H
#define SAM_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 *
 * Return: On success 1.
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: (write(1, &c, 1));
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _pow - A function to muliply to an exponent
 * @base: The base
 * @exponent: The exponent
 *
 * Return: It returns result
 */

int _pow(int base, int exponent)
{
	int result = 1;
	int i = 0;

	if (exponent >= 0)
	{
		for (i = 0; i < exponent; i++)
			result = (result * base);
	}
	else
	{
		for (i = 0; i > exponent; i--)
			result = (result / base);
	}

	return result;
}

#endif
