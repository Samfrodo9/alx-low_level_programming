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

