#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node to start of list
 * @head: Doubly linked List pointer
 * @n: value to add to new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = h;



	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	if (h)
		h->prev = new;

	*head = new;

	return (*head);
}
