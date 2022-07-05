#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if character is lowercase,
 * uppercase or number
 * @c: is an integer value
 * Return: 0 always
 */
int _isalpha(int c)
{
	int i;

	i = isalpha(c);
	if (i == 0)
		return (0);
	else
		return (1);
}
