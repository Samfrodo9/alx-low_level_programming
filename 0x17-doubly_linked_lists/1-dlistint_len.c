#include "lists.h"

/**
 * dlistint_len - returns the length of a dlinked list
 * @h: a pointer to the head
 *
 * Return: Number of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (!h)
		return (i);

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}

	return (i + 1);
}
