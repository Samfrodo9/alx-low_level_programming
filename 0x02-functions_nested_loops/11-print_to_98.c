#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * print_to_98 - Prints natural number up to 98
 * @n: integer value
 * Return: 0 always
 * */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", 98);
		return;
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
		return;
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		}
		return;
	}
}
