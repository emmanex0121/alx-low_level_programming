#include "lists.h"

/**
 * dlistint_len - Functrion that returns the number of elements in the list
 * @h: Doubly Linked Lists passed
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elem = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->n)
			num_elem++;
		h = h->next;
	}
	return (num_elem);
}
