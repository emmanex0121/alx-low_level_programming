#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - Function that prints the nodes of a D-L-List
 * @h: Double Linked List passed in
 *
 * Return: Number of nodes in the D-L-List
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num_elem = 0;

	if (h == NULL)
		return (num_elem);

	while (h != NULL)
	{
		if (h->n)
			printf("%d\n", h->n);
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}
