#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - uses linear search algorithm
 * @array: points to the first element of the array
 * @size: number of element in the array
 * @value: value to search for
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
