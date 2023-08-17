#include "lists.h"

/**
 * print_dlistint - prints a dlinked list
 * @h: pointer to head of list
 *
 * Return: Length of list
 */


size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (!h)
		return (i);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	printf("%d\n", h->n);


	return (i + 1);
}
