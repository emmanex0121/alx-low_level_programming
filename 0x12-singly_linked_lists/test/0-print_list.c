#include "lists.h"

/**
 * print_list - Function of type size_t to print strings
 * @h: pointer to singly linked list struct list_s of new typedef list_t
 *
 * Return: nothing
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}
