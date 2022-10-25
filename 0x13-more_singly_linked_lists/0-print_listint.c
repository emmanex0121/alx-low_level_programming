#include "lists.h"

/**
 * print_listint - Function to print list elements and retun number of elements
 * @h: struct holding the singly linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}
	return (num_node);
}
