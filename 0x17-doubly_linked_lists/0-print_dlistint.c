#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	printf("%d\n", h->n);


	return (i + 1);
}
