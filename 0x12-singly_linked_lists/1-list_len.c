#include "lists.h"

/**
 * list_len - function that returns number of elements in a list
 * @h: pointer to the list
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
