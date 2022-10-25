#include "lists.h"

/**
 * listint_len - Function to return linked list lenght
 * @h: Singly Linked list pointer
 *
 * Return: Number of elements in the singly linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		if (h->n)
			list_len++;
		h = h->next;
	}
	return (list_len);
}
