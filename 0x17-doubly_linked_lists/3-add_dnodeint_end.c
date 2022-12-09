#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node to end of list
 * @head: Doubly linked List pointer
 * @n: value to add to new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = h;

	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}
