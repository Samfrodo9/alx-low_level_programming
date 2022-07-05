#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_sign - check if character is lowercase
 * @n: is an integer value
 * Return: 0 always
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
