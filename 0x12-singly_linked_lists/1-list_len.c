#include "lists.h"

/*
 * list_len - Function that returns number of elements in a list
 * @h: pointer to the list
 *
 * Return: umber of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
