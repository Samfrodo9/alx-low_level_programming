#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - uses binary search to search for a value in a sorted array.
 * @array: points to the first element of the array
 * @size: nuumber of element in the array
 * @value: the value to search for
 * Return: -1 if array is null, value on success
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, left = 0, right = size - 1, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}
	return (-1);
}
