#include "main.h"

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

	return (result);
}

/**
 * _strlen - A function that calculates the length of a string
 * @b: string passed to the function
 *
 * Return: Length of string
 */

int _strlen(const char *b)
{
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	return (len);
}
